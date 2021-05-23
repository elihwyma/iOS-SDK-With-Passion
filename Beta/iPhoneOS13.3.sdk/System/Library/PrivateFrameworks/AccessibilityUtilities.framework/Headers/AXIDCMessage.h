/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AccessibilityUtilities/AXSimpleMessage.h>

@class NSString;

@interface AXIDCMessage : AXSimpleMessage

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
