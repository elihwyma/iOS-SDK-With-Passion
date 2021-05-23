/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject

{
    NSSet *_supportedCurrencyCodes;
    NSSet *_allowedPayloadIDs;
}

@property (nonatomic, readonly) NSSet *supportedCurrencyCodes;
@property (nonatomic, readonly) NSSet *allowedPayloadIDs;

- (id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(unsigned long long)arg3;
- (id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2;
- (id)parsePayload:(id)arg1 payloadID:(id)arg2;

@end
