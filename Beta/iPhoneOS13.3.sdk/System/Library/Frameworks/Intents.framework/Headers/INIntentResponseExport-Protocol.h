/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentResponse;

@protocol INIntentResponseExport <Swift>

@property (copy, nonatomic, readonly) _INPBIntentResponse *backingStore;
@property (nonatomic, readonly) long long code;

- (unsigned short)init;
- (unsigned short)_intentHandlingStatus;
- (unsigned short)_payloadResponseMessageData;
- (unsigned short)_setPayloadResponseMessageData: /* Error: Ran out of types for this method. */;

@end
