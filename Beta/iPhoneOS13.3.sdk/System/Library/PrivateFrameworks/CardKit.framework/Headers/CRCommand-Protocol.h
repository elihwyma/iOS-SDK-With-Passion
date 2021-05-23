/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/Swift-Protocol.h>

@class NSDictionary;

@protocol CRCommand <Swift>

@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;

@end
