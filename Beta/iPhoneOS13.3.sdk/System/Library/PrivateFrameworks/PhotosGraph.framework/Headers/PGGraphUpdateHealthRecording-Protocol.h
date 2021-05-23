/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@protocol PGGraphUpdateHealthRecording <Swift>

- (unsigned short)beginRecording;
- (unsigned short)recordNumberOfDatabaseChangesReceived:inBackground: /* Error: Ran out of types for this method. */;
- (unsigned short)recordNumberOfDatabaseChangesConvertedToGraphChanges:inBackground: /* Error: Ran out of types for this method. */;
- (unsigned short)recordNumberOfTimesGraphUpdatePaused: /* Error: Ran out of types for this method. */;
- (unsigned short)recordTransactionSize: /* Error: Ran out of types for this method. */;
- (unsigned short)endRecordingInBackground: /* Error: Ran out of types for this method. */;

@end
