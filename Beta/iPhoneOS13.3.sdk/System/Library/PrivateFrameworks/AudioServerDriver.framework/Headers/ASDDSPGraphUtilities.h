/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@interface ASDDSPGraphUtilities : NSObject

+ (_Bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 fromStream:(id)arg3 toDirectory:(id)arg4 withType:(long long)arg5 error:(id *)arg6;
+ (_Bool)startRecordingAllBoxesInGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(long long)arg4 error:(id *)arg5;
+ (_Bool)stopRecordingBoxesInGraph:(id)arg1;
+ (_Bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;
+ (_Bool)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id *)arg3;
+ (_Bool)stopInjectingBoxesInGraph:(id)arg1;

@end
