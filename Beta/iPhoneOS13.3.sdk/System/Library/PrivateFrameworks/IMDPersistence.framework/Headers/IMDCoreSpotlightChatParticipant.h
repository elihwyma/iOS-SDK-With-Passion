/*
 Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@interface IMDCoreSpotlightChatParticipant : NSObject

{
    _Bool _isSender;
    NSString *_handleID;
    CNContact *_contact;
}

@property (copy, nonatomic, readonly) NSString *handleID;
@property (retain, nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) _Bool isSender;

- (void)dealloc;
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(_Bool)arg3;

@end
