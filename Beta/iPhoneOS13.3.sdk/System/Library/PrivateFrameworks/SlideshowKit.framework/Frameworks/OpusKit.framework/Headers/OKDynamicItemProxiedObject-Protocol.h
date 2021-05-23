/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/Swift-Protocol.h>

@class OKWidgetView;

@protocol OKDynamicItemProxiedObject <Swift>

@property (nonatomic, readonly) OKWidgetView *parentWidgetView;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform dynamicsTransform;

@end
