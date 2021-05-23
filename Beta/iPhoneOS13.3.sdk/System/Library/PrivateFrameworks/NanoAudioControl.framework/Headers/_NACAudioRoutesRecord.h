/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NACAudioRoutesRecord : NSObject

{
    NSArray *_audioRoutes;
    NSArray *_deferredAudioRoutes;
    NSMutableSet *_observers;
    double _timestamp;
}

@property (retain, nonatomic) NSArray *audioRoutes;
@property (retain, nonatomic) NSArray *deferredAudioRoutes;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) double timestamp;

@end
