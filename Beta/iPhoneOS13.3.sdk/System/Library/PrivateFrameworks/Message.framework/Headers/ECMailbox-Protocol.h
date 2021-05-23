/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSString, NSURL;

@protocol ECMailbox <Swift>

@property (copy, nonatomic, readonly) NSString *persistentID;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *URL;

@end
