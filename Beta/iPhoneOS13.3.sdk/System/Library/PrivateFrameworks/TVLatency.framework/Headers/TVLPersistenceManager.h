/*
 Image: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
 */

#import <Foundation/NSObject.h>

@interface TVLPersistenceManager : NSObject

+ (id)documentsDirectory:(id)arg1;
+ (id)recordingsDirectory:(id)arg1;
+ (id)URLForRecording;
+ (id)allRecordingPaths;
+ (void)eraseAllRecordings;

@end
