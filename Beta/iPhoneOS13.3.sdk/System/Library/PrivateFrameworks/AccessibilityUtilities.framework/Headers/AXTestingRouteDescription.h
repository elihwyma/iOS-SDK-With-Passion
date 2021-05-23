/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AVFoundation/AVAudioSessionRouteDescription.h>

@class NSArray;

@interface AXTestingRouteDescription : AVAudioSessionRouteDescription

{
    NSArray *outputs;
    NSArray *inputs;
}

@property (retain, nonatomic) NSArray *inputs;
@property (retain, nonatomic) NSArray *outputs;

@end
