//
//  FPCDatePickerView.h
//  KeyUnitCheck
//
//  Created by Geddy on 2019/5/16.
//  Copyright © 2019 Geddy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 回调Block
typedef void(^FPCDatePickerViewSelectTimeBlock)(NSArray<NSString *> * dateArray);

// 时间格式样式 @"yyyy-MM-dd HH:mm:ss"
typedef enum : NSUInteger {
    FPCDatePickerViewDateFormatterStyle_yMd = 0, // 年-月-日
    FPCDatePickerViewDateFormatterStyle_yMdHms = 1, // 年-月-日 时:分:秒
    FPCDatePickerViewDateFormatterStyle_yMdHm = 2, // 年-月-日 时:分
    FPCDatePickerViewDateFormatterStyle_Hms = 3, // 时:分:秒
    FPCDatePickerViewDateFormatterStyle_Hm = 4, // 时:分
    FPCDatePickerViewDateFormatterStyle_Default = 0, // 默认
} FPCDatePickerViewDateFormatterStyle; // 时间格式样式

@interface FPCDatePickerView : UIView

// Init
/**
 调用方法
 @param formatterStyle 时间格式样式
 @param block 数据回调
 */
+(void)showFPCDatePickerViewWithStyle:(FPCDatePickerViewDateFormatterStyle)formatterStyle
                                block:(FPCDatePickerViewSelectTimeBlock)block;

@end


NS_ASSUME_NONNULL_END
