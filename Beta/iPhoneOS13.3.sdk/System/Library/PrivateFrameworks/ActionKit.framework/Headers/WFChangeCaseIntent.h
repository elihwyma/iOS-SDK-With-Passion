/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntent.h>

@class NSArray;

@interface WFChangeCaseIntent : INIntent

@property (copy, nonatomic) NSArray *text;
@property (nonatomic) long long type;

@end
