/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface JTCompositionSettings : NSObject

{
    int _timeScale;
    int _frameRate;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGSize _frameSize;
    struct CGSize _renderSize;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int timeScale;
@property (nonatomic) int frameRate;
@property (nonatomic) struct CGSize frameSize;
@property (nonatomic) struct CGSize renderSize;

+ (id)sharedInstance;

- (id)init;

@end
