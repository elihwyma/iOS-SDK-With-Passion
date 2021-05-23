/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation

{
    CKRecordID *_recordID;
    CKRecordID *_shareID;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithItem:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;

@end
