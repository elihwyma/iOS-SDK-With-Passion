/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSURL;

@interface PKDisbursementVoucher : NSObject <Swift>

{
    NSData *_data;
    NSURL *_redemptionURL;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSURL *redemptionURL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToDisbursementVoucher:(id)arg1;

@end
