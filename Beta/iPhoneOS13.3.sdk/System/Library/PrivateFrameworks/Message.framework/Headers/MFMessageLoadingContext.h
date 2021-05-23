/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFCancelationToken, EFObservable, MFAttachmentManager, MFMailMessage, MFMimeBody, MFMimePart, NSString;

@protocol EFObserver;

@interface MFMessageLoadingContext : NSObject

{
    EFCancelationToken *_cancelable;
    EFObservable<EFObserver> *_inputObservable;
    NSString *_eventUniqueID;
    NSString *_meetingName;
    NSString *_meetingStorePersistentID;
    NSString *_eventICSRepresentation;
    _Bool _hasLoadedSomeContent;
    _Bool _hasLoadedCompleteMessage;
    _Bool _hasLoadedBestAlternativePart;
    _Bool _outgoingMessage;
    _Bool _draftMessage;
    _Bool _editableMessage;
    MFMailMessage *_message;
    MFMimeBody *_messageBody;
    MFAttachmentManager *_attachmentManager;
    EFObservable *_contentObservable;
    MFMimePart *_loadedPart;
    unsigned long long _contentOffset;
}

@property (retain, nonatomic, setter=_setMessage:) MFMailMessage *message;
@property (retain, nonatomic, setter=_setMessageBody:) MFMimeBody *messageBody;
@property (retain, nonatomic, setter=_setAttachmentManager:) MFAttachmentManager *attachmentManager;
@property (retain, nonatomic) MFMimePart *loadedPart;
@property (nonatomic) unsigned long long contentOffset;
@property (nonatomic) _Bool hasLoadedSomeContent;
@property (nonatomic) _Bool hasLoadedCompleteMessage;
@property (nonatomic) _Bool hasLoadedBestAlternativePart;
@property (nonatomic, readonly, getter=isOutgoingMessage) _Bool outgoingMessage;
@property (nonatomic, readonly, getter=isDraftMessage) _Bool draftMessage;
@property (nonatomic, readonly, getter=isEditableMessage) _Bool editableMessage;
@property (nonatomic, readonly) EFObservable *contentObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;

- (void)dealloc;
- (void)cancel;
- (void)load:(long long)arg1;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (void)load:(long long)arg1 scheduler:(id)arg2 shouldDownload:(_Bool)arg3;
- (void)_setupMeetingData;
- (void)_setupObservableStreams;
- (void)assignAttachmentManagerToContent:(id)arg1;
- (void)processMeetingInvitations:(id)arg1;
- (id)onScheduler:(id)arg1 addLoadObserver:(CDUnknownBlockType)arg2;
- (void)load:(long long)arg1 scheduler:(id)arg2;
- (void)_load:(long long)arg1 shouldDownload:(_Bool)arg2;
- (id)_reallyLoad:(long long)arg1 shouldDownload:(_Bool)arg2;
- (id)addLoadObserver:(CDUnknownBlockType)arg1;

@end
