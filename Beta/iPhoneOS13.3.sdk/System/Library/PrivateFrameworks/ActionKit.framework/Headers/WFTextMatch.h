/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INObject.h>

@class NSNumber, NSString;

@interface WFTextMatch : INObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSNumber *caseSensitive;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSNumber *index;

@end
