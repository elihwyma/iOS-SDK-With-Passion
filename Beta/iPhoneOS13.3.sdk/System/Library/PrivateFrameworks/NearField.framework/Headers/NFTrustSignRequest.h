/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@class NSData;

@interface NFTrustSignRequest : NFTrustObject

{
    NSData *_challenge;
    NSData *_data;
}

@property (retain, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)signRequestWithChallenge:(id)arg1 data:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
