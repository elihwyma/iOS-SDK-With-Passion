/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDateComponents, NSString, NSURL;

@interface PKAccountPhysicalCardShippingUpdate : NSObject <Swift>

{
    NSString *_physicalCardIdentifier;
    long long _shippingStatus;
    NSString *_localizedDeliveryExceptionReason;
    NSString *_trackingNumber;
    NSString *_shippingCompany;
    NSDate *_timestamp;
    NSDateComponents *_estimatedDeliveryDate;
}

@property (copy, nonatomic) NSString *physicalCardIdentifier;
@property (nonatomic) long long shippingStatus;
@property (copy, nonatomic) NSString *localizedDeliveryExceptionReason;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDateComponents *estimatedDeliveryDate;
@property (nonatomic, readonly) NSURL *shipmentTrackingURL;
@property (copy, nonatomic, readonly) NSString *formattedEstimatedDeliveryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (_Bool)isEqualToPhysicalCardShippingUpdate:(id)arg1;

@end
