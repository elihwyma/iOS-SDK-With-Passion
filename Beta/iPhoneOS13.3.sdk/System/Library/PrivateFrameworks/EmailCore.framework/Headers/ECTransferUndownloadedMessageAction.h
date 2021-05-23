/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalMessageAction.h>

@class NSArray, NSString, NSURL;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction

{
    long long _transferType;
    NSURL *_sourceMailboxURL;
    NSURL *_destinationMailboxURL;
    NSString *_oldestPersistedRemoteID;
    NSArray *_itemsToDelete;
}

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) NSArray *itemsToDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) _Bool userInitiated;

- (id)initWithBuilder:(CDUnknownBlockType)arg1;
- (void)updateWithCompletedCopyItems:(id)arg1;

@end
