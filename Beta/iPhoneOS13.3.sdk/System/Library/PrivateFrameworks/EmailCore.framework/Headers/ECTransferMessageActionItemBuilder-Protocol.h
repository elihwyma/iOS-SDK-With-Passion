/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSString;

@protocol ECMessage;

@protocol ECTransferMessageActionItemBuilder <Swift>

@property (copy, nonatomic) NSString *sourceRemoteID;
@property (retain, nonatomic) id <ECMessage> sourceMessage;
@property (retain, nonatomic) id <ECMessage> destinationMessage;

@end
