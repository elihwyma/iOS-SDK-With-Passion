/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@class NSArray, NSData, NSNumber;

@interface NFTrustKeyRequest : NFTrustObject

{
    NSData *_subjectIdentifier;
    NSData *_discretionaryData;
    NSArray *_localValidations;
    NSNumber *_counterLimit;
}

@property (retain, nonatomic) NSNumber *counterLimit;
@property (retain, nonatomic) NSData *subjectIdentifier;
@property (retain, nonatomic) NSData *discretionaryData;
@property (retain, nonatomic) NSArray *localValidations;

+ (_Bool)supportsSecureCoding;
+ (id)keyRequestWithSubjectIdentifier:(id)arg1 discretionaryData:(id)arg2 localValidations:(id)arg3 counterLimit:(id)arg4;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
