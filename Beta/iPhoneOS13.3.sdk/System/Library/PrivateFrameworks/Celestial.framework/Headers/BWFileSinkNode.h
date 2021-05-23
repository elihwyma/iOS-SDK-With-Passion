/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;

@interface BWFileSinkNode : BWSinkNode

{
    id <BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;
}

@property (nonatomic) id <BWNodeFileWriterStatusDelegate> recordingStatusDelegate;
@property (nonatomic, readonly) unsigned long long lastFileSize;
@property (nonatomic, readonly) CDStruct_1b6d18a9 lastFileDuration;

@end
