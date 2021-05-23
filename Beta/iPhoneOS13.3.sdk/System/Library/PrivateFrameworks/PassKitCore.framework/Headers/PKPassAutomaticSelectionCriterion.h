/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSSet, NSString;

@interface PKPassAutomaticSelectionCriterion : NSObject <Swift>

{
    _Bool _supportsExpress;
    NSString *_type;
    long long _technologyType;
    NSSet *_primaryTCIs;
    NSSet *_TCIs;
    NSData *_mask;
}

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long technologyType;
@property (nonatomic) _Bool supportsExpress;
@property (copy, nonatomic) NSSet *primaryTCIs;
@property (copy, nonatomic) NSSet *TCIs;
@property (copy, nonatomic) NSData *mask;

+ (_Bool)supportsSecureCoding;
+ (id)criterionForExpressMode:(id)arg1;
+ (id)expressModeForCriterion:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
