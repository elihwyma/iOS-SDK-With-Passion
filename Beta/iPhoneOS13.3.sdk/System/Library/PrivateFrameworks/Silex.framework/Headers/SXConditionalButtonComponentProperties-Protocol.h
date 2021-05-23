/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXAction;

@protocol SXConditionalButtonComponentProperties <Swift>

@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) id <SXAction> action;

@end
