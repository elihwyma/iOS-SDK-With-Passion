/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/Swift-Protocol.h>

@class NSDictionary;

@protocol CRCommand <Swift>

@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;

@end
