﻿#include <iostream>
#include "camera.h"
#include "image.h"

using namespace std;

int main() {
	Camera camera;
	Image image;
	int camera_code, image_type, switch_num, flag = 1;
	string;
	while (flag == 1) {
		cout << "select your test.\n\
	1.  open image test\n\
	2.  image color space test\n\
	3.  image matrix creation test\n\
	4.  image pixel visit test\n\
	5.  image operator test\n\
	6.  image tracking bar test\n\
	7.  image key test\n\
	8.  image color style test\n\
	9.  image bitwise test\n\
	10. image channels test \n\
	11. image inrange test \n\
	12. image pixel statistic test \n\
	13. image drawing test \n\
	14. image random drawing test \n\
	15. image polyline drawing test \n\
	16. image mouse drawing test"<< endl;
		cout << "input switch number:";
		cin >> switch_num;
		switch (switch_num) {
			case 1:
				cout << "input image type(color = 0, gray = 1):";
				cin >> image_type;
				image.OpenImage(image_type);
				break;
			case 2:
				// 色彩空间转换
				image.ImageColorSpace();
				break;
			case 3:
				// 矩阵生成
				image.ImageMatrixCreation();
				break;
			case 4:
				// 像素访问
				image.ImagePixelVisit();
				break;
			case 5:
				// 操作数
				image.ImageOperator();
				break;
			case 6:
				// 滚动条亮度显示
				image.ImageTrackingBar();
				break;
			case 7:
				// 键盘交互显示
				image.ImageKey();
				break;
			case 8:
				// 图片颜色样式显示
				image.ImageColorStyle();
				break;
			case 9:
				// 图片像素逻辑关系
				image.ImageBitwise();
				break;
			case 10:
				// 通道分离与合并
				image.ImageChannels();
				break;
			case 11:
				// 图像色彩空间转换
				image.ImageInRange();
				break;
			case 12:
				// 图像像素值统计
				image.ImagePixelStatistic();
				break;
			case 13:
				// 几何形状绘制
				image.ImageDrawing();
				break;
			case 14:
				// 形状随机绘制
				image.ImageRandomDrawing();
				break;
			case 15:
				// 多边形绘制
				image.ImagePolylineDrawing();
				break;
			case 16:
				// 鼠标绘制
				image.ImageMouseDrawing();
				break;
			case 99:
				cout << "input camera code(default is 0):";
				cin >> camera_code;
				camera.OpenCamera(camera_code);
				break;
			default:
				flag = 0;
				break;
		}
	}
	return 0;
}
