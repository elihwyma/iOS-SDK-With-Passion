/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject

{
    _Bool _isSelected;
    CTPlanIdentifier *_planID;
    CTPlanTransferAttributes *_transferAttributes;
}

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) _Bool isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)phoneNumber;
- (id)iccid;
- (id)carrierName;

@end
