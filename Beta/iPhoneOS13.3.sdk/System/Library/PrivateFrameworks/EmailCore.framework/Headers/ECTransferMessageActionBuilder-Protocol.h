/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSArray, NSURL;

@protocol ECTransferMessageActionBuilder <Swift>

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (retain, nonatomic) NSArray *itemsToDownload;
@property (retain, nonatomic) NSArray *itemsToCopy;
@property (retain, nonatomic) NSArray *itemsToDelete;

@end
