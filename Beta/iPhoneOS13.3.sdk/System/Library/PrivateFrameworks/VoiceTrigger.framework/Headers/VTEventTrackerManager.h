/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VTEventTrackerManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id *)arg4;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id *)arg4;
- (void)voiceTriggerEvent:(CDUnknownBlockType)arg1;
- (id)_dictionaryToJson:(id)arg1;

@end
