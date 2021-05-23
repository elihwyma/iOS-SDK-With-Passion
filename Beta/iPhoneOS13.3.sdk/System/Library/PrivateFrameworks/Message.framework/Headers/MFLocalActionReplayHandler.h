/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDLocalActionPersistence, EDMessageChangeManager, MFMailMessageLibrary, MailAccount, NSMutableArray, NSString;

@protocol EFScheduler;

@interface MFLocalActionReplayHandler : NSObject

{
    _Bool _replayingActions;
    _Bool _needToCheckForNewActions;
    MFMailMessageLibrary *_library;
    EDMessageChangeManager *_messageChangeManager;
    EDLocalActionPersistence *_localActionPersistence;
    MailAccount *_account;
    NSMutableArray *_actionsToReplay;
    id <EFScheduler> _replayScheduler;
}

@property (retain, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (retain, nonatomic) EDLocalActionPersistence *localActionPersistence;
@property (weak, nonatomic) MailAccount *account;
@property (retain, nonatomic) NSMutableArray *actionsToReplay;
@property (nonatomic, readonly) id <EFScheduler> replayScheduler;
@property (nonatomic) _Bool needToCheckForNewActions;
@property _Bool replayingActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (id)log;

- (void)connectionEstablished;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;
- (void)newActionsAdded;
- (void)addNewAction:(id)arg1;
- (void)_replayAllActions;
- (void)_checkForNewActions;

@end
