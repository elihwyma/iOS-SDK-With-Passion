/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/HUSimpleMessage.h>

@class NSString;

@interface HUIDCMessage : HUSimpleMessage

{
    NSString *_UUID;
    CDUnknownBlockType _sendCompletion;
}

@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) CDUnknownBlockType sendCompletion;

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(CDUnknownBlockType)arg2;

- (id)initWithPayload:(id)arg1;
- (id)transportPayload;

@end
