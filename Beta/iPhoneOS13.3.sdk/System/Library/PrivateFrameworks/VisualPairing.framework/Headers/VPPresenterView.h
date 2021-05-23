/*
 Image: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
 */

#import <UIKit/UIView.h>

@class AVPlayer, CALayer, NSArray, NSObject, NSString;

@protocol OS_dispatch_source;

@interface VPPresenterView : UIView

{
    AVPlayer *_moviePlayer;
    _Bool _started;
    CALayer *_watermarkLayer;
    NSArray *_watermarkPixelBuffers;
    unsigned long long _watermarkStepIndex;
    NSObject<OS_dispatch_source> *_watermarkStepTimer;
    unsigned int _flags;
    NSString *_verificationCode;
}

@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *verificationCode;

- (void)stop;
- (void)start;
- (void)layoutSubviews;
- (void)_watermarkStep;

@end
