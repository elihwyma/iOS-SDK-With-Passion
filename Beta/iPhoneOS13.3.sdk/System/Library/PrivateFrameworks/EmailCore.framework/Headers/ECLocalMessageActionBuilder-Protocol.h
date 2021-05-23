/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSString, NSURL;

@protocol ECLocalMessageActionBuilder <Swift>

@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) _Bool userInitiated;

@end
