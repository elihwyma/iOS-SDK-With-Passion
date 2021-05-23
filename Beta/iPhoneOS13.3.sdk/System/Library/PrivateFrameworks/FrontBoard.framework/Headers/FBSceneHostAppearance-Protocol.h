/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@class NSString, UIColor;

@protocol FBSceneHostAppearance <Swift>

@property (nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@property (nonatomic) struct CGAffineTransform hostViewTransform;
@property (retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property (retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long hostedLayerTypes;
@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic) NSString *minificationFilterName;
@property (nonatomic) unsigned long long appearanceStyle;
@property (nonatomic, readonly, getter=isHosting) _Bool hosting;
@property (nonatomic, readonly) struct CGRect referenceFrame;
@property (nonatomic, readonly) double level;

@end
