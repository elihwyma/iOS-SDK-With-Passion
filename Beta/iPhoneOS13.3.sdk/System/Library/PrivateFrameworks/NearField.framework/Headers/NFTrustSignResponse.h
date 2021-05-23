/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@class NFTrustKey, NSData, NSNumber, NSString;

@interface NFTrustSignResponse : NFTrustObject

{
    NSNumber *_counterValue;
    NFTrustKey *_key;
    NSData *_trustObjectInternalRawNSData;
}

@property (retain, nonatomic) NSData *trustObjectInternalRawNSData;
@property (retain, nonatomic) NSNumber *counterValue;
@property (nonatomic, readonly) NSString *rawData;
@property (retain, nonatomic) NFTrustKey *key;

+ (_Bool)supportsSecureCoding;
+ (id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
