/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIStackedBar;

@interface SKUIStackedPushTransition : NSObject <Swift>

{
    double _split;
    SKUIStackedBar *_fromBar;
    SKUIStackedBar *_toBar;
}

@property (retain, nonatomic) SKUIStackedBar *fromBar;
@property (retain, nonatomic) SKUIStackedBar *toBar;
@property (nonatomic) double split;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
