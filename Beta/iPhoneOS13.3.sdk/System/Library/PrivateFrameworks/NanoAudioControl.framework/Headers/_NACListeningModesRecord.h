/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface _NACListeningModesRecord : NSObject

{
    NSOrderedSet *_availableListeningModes;
    NSString *_currentListeningMode;
    NSMutableSet *_observers;
}

@property (retain, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (retain, nonatomic) NSMutableSet *observers;

@end
