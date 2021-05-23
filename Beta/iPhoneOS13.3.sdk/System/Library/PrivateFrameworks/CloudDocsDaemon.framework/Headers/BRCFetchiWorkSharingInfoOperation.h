/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation

{
    CKRecordID *_recordID;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1;

@end
