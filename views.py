from django.shortcuts import render

from django.http import HttpResponse

marker_data = [
    {"x": 200, "y": 500, "title": "Marker 1", "description": "This is marker 1"},
    {"x": 400, "y": 300, "title": "Marker 2", "description": "This is marker 2"},
]
def equipment(request):
    speaker_connected = False  # 스피커 연결 상태 (실제 로직으로 변경)
    volume = 50  # 초기 볼륨 값
    balance = 0  # 초기 밸런스 값
    issues = [
    {'device_name': '스피커 A', 'problem': '소리가 나지 않음'},
    {'device_name': '마이크 B', 'problem': '끊김 현상 발생'}
]  # 장비 문제 목록 (DB에서 가져오는 로직으로 변경)

    context = {
    'speaker_connected': speaker_connected,
    'volume': volume,
    'balance': balance,
    'issues': issues,
    }
    return render(request, 'equipment.html', context)

def real_time_detection_view(request):
    context = {
        'google_api_key': 'AIzaSyBzaBS0PeQKNkE6TC35y1Yows-govsMQdA',  # Google API 키
        'marker_data': [
            {'latitude': 35.803686, 'longitude': 128.822442, 'title': 'Marker 1', 'icon': '/static/icons/icon1.png'},
            {'latitude': 35.810000, 'longitude': 128.820000, 'title': 'Marker 2', 'icon': '/static/icons/icon2.png'},
        ]
    }
    return render(request, 'real_time_detection.html', context)

def index(request):
    data = 'Main page rendered from template'
    context = {'message': data}
    return render(request, 'index.html', context)