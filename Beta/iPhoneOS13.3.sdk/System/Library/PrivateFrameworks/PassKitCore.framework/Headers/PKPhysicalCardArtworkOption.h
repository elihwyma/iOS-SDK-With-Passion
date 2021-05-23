/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSURL, PKImage;

@interface PKPhysicalCardArtworkOption : NSObject <Swift>

{
    _Bool _optionUnavailable;
    NSString *_identifier;
    NSURL *_frontFaceImageURL;
    unsigned long long _minimumEstimatedShippingTime;
    unsigned long long _maximumEstimatedShippingTime;
    long long _shippingTimeUnit;
    PKImage *_frontFaceImage;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *frontFaceImageURL;
@property (nonatomic, readonly) unsigned long long minimumEstimatedShippingTime;
@property (nonatomic, readonly) unsigned long long maximumEstimatedShippingTime;
@property (nonatomic, readonly) long long shippingTimeUnit;
@property (nonatomic, readonly) _Bool optionUnavailable;
@property (retain, nonatomic) PKImage *frontFaceImage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
