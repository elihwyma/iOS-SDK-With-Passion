/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSCoder.h>

@class NSDictionary;

@interface NSCoder (MSVAdditions)

@property (copy, nonatomic, setter=msv_setUserInfo:) NSDictionary *msv_userInfo;

@end
