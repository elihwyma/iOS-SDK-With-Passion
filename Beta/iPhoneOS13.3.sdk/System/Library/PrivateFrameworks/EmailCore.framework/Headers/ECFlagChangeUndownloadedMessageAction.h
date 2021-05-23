/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalMessageAction.h>

@class ECMessageFlagChange, NSString, NSURL;

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction

{
    NSString *_oldestPersistedRemoteID;
    ECMessageFlagChange *_flagChange;
}

@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) _Bool userInitiated;

- (id)initWithBuilder:(CDUnknownBlockType)arg1;

@end
