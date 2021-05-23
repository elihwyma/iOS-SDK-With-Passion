/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction

@property (nonatomic, readonly) long long outputFormat;
@property (nonatomic, readonly) _Bool startImmediately;
@property (nonatomic, readonly) double recordingDuration;

+ (id)fileTypeForFormat:(long long)arg1;
+ (id)datedFilenameForFormat:(long long)arg1;

@end
