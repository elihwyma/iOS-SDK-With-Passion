/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@class ECSubject, EFObservable, MFAddressAtomStatusManager, MFMailboxUid, NSArray, NSDate, NSIndexSet, NSString;

@protocol EFObserver;

@interface MessageHeaderViewModel

{
    NSDate *_dateSent;
    ECSubject *_subject;
    MFMailboxUid *_mailbox;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    NSArray *_bccList;
    MFAddressAtomStatusManager *_atomManager;
    EFObservable<EFObserver> *_observableObserver;
}

@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) ECSubject *subject;
@property (copy, nonatomic) MFMailboxUid *mailbox;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager;
@property (retain, nonatomic) EFObservable<EFObserver> *observableObserver;
@property (nonatomic, readonly) EFObservable *modelObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isRead) _Bool read;
@property (nonatomic, getter=isFlagged) _Bool flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) _Bool replied;
@property (nonatomic, getter=isForwarded) _Bool forwarded;
@property (nonatomic, getter=isVIP) _Bool VIP;
@property (nonatomic, getter=isNotify) _Bool notify;
@property (nonatomic, getter=isMute) _Bool mute;
@property (nonatomic, getter=isBlockedSender) _Bool blockedSender;
@property (nonatomic) _Bool hasAttachments;
@property (copy, nonatomic) NSDate *dateReceived;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;
- (_Bool)_flagsChangedInModel:(id)arg1;
- (id)initWithItemBuilder:(CDUnknownBlockType)arg1;
- (id)updatedFlagsModelWithBuilder:(CDUnknownBlockType)arg1;
- (id)updatedModelWithMessage:(id)arg1;

@end
