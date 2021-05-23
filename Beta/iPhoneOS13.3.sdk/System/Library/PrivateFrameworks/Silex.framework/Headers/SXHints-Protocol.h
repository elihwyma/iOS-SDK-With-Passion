/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXConditionHints, SXConditionalHints;

@protocol SXHints <Swift>

@property (nonatomic, readonly) id <SXConditionHints> conditions;
@property (nonatomic, readonly) id <SXConditionalHints> conditionals;

@end
