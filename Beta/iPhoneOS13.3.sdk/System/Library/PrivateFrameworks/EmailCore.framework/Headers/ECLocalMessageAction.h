/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

#import <EmailCore/Swift-Protocol.h>

@class NSString, NSURL;

@interface ECLocalMessageAction : NSObject <Swift>

{
    _Bool _userInitiated;
    NSString *_messageActionPersistentID;
    NSURL *_mailboxURL;
}

@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) _Bool userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
