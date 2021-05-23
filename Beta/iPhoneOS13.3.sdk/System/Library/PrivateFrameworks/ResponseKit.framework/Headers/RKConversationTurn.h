/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface RKConversationTurn : NSObject

{
    NSString *_text;
    NSString *_senderId;
    NSDate *_timestamp;
}

@property (readonly) NSString *text;
@property (readonly) NSString *senderId;
@property (readonly) NSDate *timestamp;

- (id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3;

@end
