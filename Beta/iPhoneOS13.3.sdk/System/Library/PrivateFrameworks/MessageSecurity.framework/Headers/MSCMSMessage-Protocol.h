/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <MessageSecurity/Swift-Protocol.h>

@class MSOID, NSData;

@protocol MSCMSMessage;

@protocol MSCMSMessage <Swift>

@property (readonly) MSOID *type;
@property (retain, nonatomic) NSData *dataContent;
@property (retain) id <MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;

@end
