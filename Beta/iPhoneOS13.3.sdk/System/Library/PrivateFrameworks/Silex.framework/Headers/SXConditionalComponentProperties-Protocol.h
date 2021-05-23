/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString, SXComponentAnimation, SXJSONArray;

@protocol SXComponentAnchor;

@protocol SXConditionalComponentProperties <Swift>

@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) NSString *style;
@property (nonatomic, readonly) id <SXComponentAnchor> anchor;
@property (nonatomic, readonly) SXJSONArray *behaviors;
@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) _Bool hidden;

@end
