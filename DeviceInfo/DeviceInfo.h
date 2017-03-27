//
//  DeviceInfo.h
//  DeviceInfo
//
//  Created by Doman on 17/3/27.
//  Copyright © 2017年 doman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceInfo : NSObject

/** 信息名称 */
@property (nonatomic, copy) NSString *infoKey;

/** 信息内容 */
@property (nonatomic, copy) NSString *infoValue;

/** 遍历构造器 */
+ (instancetype)infoWithDict:(NSDictionary *)dict;

@end
