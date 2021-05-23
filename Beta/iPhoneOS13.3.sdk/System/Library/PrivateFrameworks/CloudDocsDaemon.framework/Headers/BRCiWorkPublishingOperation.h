/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCItemID, BRCServerZone, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCiWorkPublishingOperation : _BRCOperation

{
    BRCItemID *_itemID;
    NSArray *_recordIDs;
    _Bool _forPublish;
    _Bool _readonly;
    NSNumber *_sharingInfo;
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1 forPublish:(_Bool)arg2 readonly:(_Bool)arg3;
- (void)_updateItemAfterShareCompleted;

@end
