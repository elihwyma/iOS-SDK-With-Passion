/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSSet, NSString, NSURL, PKImage;

@interface PKPhysicalCard : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _state;
    NSString *_FPANSuffix;
    NSURL *_frontFaceImageURL;
    NSString *_nameOnCard;
    NSDate *_lastUpdated;
    NSString *_trackingNumber;
    NSString *_shippingCompany;
    NSSet *_orderActivity;
    NSSet *_shippingActivity;
    PKImage *_frontFaceImage;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSURL *frontFaceImageURL;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (copy, nonatomic) NSSet *orderActivity;
@property (copy, nonatomic) NSSet *shippingActivity;
@property (retain, nonatomic) PKImage *frontFaceImage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)latestOrderActivity;
- (id)latestShippingActivity;
- (id)shipmentTrackingURL;

@end
