/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCServerChangeState, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedDatabaseSyncOperation : _BRCOperation

{
    BRCServerChangeState *_changeState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queue;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performFetchChangedZones;
- (void)_performAfterRegisteringForPushes:(CDUnknownBlockType)arg1;
- (id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3;

@end
