/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol ECTransferUndownloadedMessageActionBuilder <Swift>

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) NSArray *itemsToDelete;

@end
