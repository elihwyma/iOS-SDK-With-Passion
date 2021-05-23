/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAddition.h>

@class NSString;

@interface SXEmailAddition : SXAddition

@property (nonatomic, readonly) NSString *to;
@property (nonatomic, readonly) NSString *subject;

- (id)action;

@end
