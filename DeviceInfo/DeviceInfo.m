//
//  DeviceInfo.m
//  DeviceInfo
//
//  Created by Doman on 17/3/27.
//  Copyright © 2017年 doman. All rights reserved.
//

#import "DeviceInfo.h"

@implementation DeviceInfo


+(instancetype)infoWithDict:(NSDictionary *)dict
{
    DeviceInfo *info = [[DeviceInfo alloc] init];
    [info setValuesForKeysWithDictionary:dict];
    return info;

}

@end
