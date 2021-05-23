/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class CKRecordID, NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation

{
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    _Bool _iWorkShareable;
    _Bool _isChildOfShare;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithItem:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_fetchBaseTokenWithCompletion:(CDUnknownBlockType)arg1;

@end
