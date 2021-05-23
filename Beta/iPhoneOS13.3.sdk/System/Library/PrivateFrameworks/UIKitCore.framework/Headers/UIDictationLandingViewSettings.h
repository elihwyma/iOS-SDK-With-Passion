/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationLandingViewSettings : NSObject

{
    _Bool _useBlackWave;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _shrinkDuration;
    double _colorTransitionInDuration;
    double _colorTransitionOutDuration;
    double _circleRPM;
}

@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double shrinkDuration;
@property (nonatomic) double colorTransitionInDuration;
@property (nonatomic) double colorTransitionOutDuration;
@property (nonatomic) double circleRPM;
@property (nonatomic) _Bool useBlackWave;

+ (id)sharedInstance;

- (id)init;

@end
