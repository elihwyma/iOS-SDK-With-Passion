/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject

{
    double _greatestScreenScale;
    GKEventEmitter *_emitter;
}

@property (retain, nonatomic) GKEventEmitter *emitter;
@property (readonly) double greatestScreenScale;

+ (id)sharedController;
+ (double)_scaleForCurrentDisplayConfiguration;

- (id)init;
- (void)registerListener:(id)arg1;
- (void)_screensDidChange:(id)arg1;
- (void)unregisterListener:(id)arg1;

@end
