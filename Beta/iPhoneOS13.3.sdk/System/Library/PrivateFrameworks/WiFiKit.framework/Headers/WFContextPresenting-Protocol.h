/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/Swift-Protocol.h>

@class UIViewController;

@protocol WFNetworkView;

@protocol WFContextPresenting <Swift>

@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;

@end
