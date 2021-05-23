/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntent.h>

@class NSNumber, NSString;

@interface WFMatchTextIntent : INIntent

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSNumber *caseSensitive;

@end
