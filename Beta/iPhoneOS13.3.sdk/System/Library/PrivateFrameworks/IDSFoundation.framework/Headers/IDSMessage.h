/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSBaseMessage.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSDictionary, NSNumber;

@interface IDSMessage : IDSBaseMessage <Swift>

{
    NSNumber *_wantsDeliveryStatus;
    NSNumber *_version;
    NSDictionary *_deliveryStatusContext;
    _Bool _wantsCertifiedDelivery;
}

@property (copy) NSNumber *wantsDeliveryStatus;
@property _Bool wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageBody;
- (_Bool)_shouldUseJSONForEncoding;
- (id)_objectForKeyFromMadridBag:(id)arg1;
- (id)_madridServerBag;
- (_Bool)wantsAPSRetries;
- (_Bool)wantsHTTPHeaders;
- (id)userAgentHeaderString;
- (_Bool)wantsUserAgentInHeaders;

@end
