/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalMessageAction.h>

@class NSArray, NSSet, NSString, NSURL;

@interface ECLabelChangeMessageAction : ECLocalMessageAction

{
    NSSet *_remoteIDs;
    NSArray *_messages;
    NSSet *_labelsToAdd;
    NSSet *_labelsToRemove;
}

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSSet *labelsToAdd;
@property (copy, nonatomic) NSSet *labelsToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) _Bool userInitiated;

- (id)initWithBuilder:(CDUnknownBlockType)arg1;

@end
