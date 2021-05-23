/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTPlanTransferAttributes, CTRemotePlanIdentifier;

@interface CTRemotePlan : NSObject

{
    CTRemotePlanIdentifier *_planID;
    CTPlanTransferAttributes *_transferAttributes;
}

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)countryCode;
- (id)phoneNumber;
- (id)label;
- (id)iccid;
- (id)carrierName;

@end
