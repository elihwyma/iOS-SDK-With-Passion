/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PlaybackAction : NSObject

{
    float time;
    long long action;
}

@property (nonatomic) long long action;
@property (nonatomic) float time;

@end
