/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject

{
    NSString *_characteristicType;
    NSString *_serviceType;
    NSString *_index;
}

@property (nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *index;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2;

@end
