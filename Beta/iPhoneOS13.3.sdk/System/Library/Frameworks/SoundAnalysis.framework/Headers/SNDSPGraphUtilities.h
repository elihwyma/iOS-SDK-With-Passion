/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphUtilities : NSObject

+ (_Bool)stopRecordingBoxesInGraph:(id)arg1;
+ (_Bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;
+ (_Bool)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id *)arg3;
+ (_Bool)stopInjectingBoxesInGraph:(id)arg1;

@end
