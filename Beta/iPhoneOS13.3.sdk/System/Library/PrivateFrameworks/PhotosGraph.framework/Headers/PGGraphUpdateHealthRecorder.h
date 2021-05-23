/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphUpdateHealthRecorder : NSObject

{
    _Bool _changeConsumer;
    unsigned long long _numberOfDatabaseChangesReceivedInForeground;
    unsigned long long _numberOfDatabaseChangesReceivedInBackground;
    unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInForeground;
    unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInBackground;
    unsigned long long _numberOfTimesGraphUpdatePaused;
    unsigned long long _maximumTransactionSize;
}

@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesReceivedInForeground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesReceivedInBackground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;
@property (nonatomic, readonly) unsigned long long numberOfTimesGraphUpdatePaused;
@property (nonatomic, readonly) unsigned long long maximumTransactionSize;
@property (nonatomic, readonly, getter=isChangeConsumer) _Bool changeConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginRecording;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(_Bool)arg2;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(_Bool)arg2;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
- (void)recordTransactionSize:(unsigned long long)arg1;
- (void)endRecordingInBackground:(_Bool)arg1;
- (id)initForChangeConsumer:(_Bool)arg1;

@end
