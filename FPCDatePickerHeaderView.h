//
//  FPCDatePickerHeaderView.h
//  KeyUnitCheck
//
//  Created by Geddy on 2019/5/16.
//  Copyright © 2019 Geddy. All rights reserved.
//

#import "BaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface FPCDatePickerHeaderView : BaseView
@property (nonatomic, copy) NSString * startTimeStr;
@property (nonatomic, copy) NSString * endTimeStr;

-(void)setStartTimeStr:(NSString *)startTimeStr;
@end

NS_ASSUME_NONNULL_END
