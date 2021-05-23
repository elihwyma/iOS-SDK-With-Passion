/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncUpOperation : _BRCOperation

{
    _Bool _shouldPerformAnotherBatch;
}

@property (nonatomic, readonly) _Bool shouldPerformAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithSession:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)performAfterSavingRecords:(CDUnknownBlockType)arg1;

@end
