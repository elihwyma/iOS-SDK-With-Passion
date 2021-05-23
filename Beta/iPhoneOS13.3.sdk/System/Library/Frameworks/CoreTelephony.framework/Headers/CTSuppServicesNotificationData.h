/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTSuppServicesNotificationData : NSObject

{
    NSNumber *_callForwardingReason;
    NSNumber *_callClass;
    NSNumber *_enabled;
    NSNumber *_active;
    NSString *_callForwardingNumber;
    NSNumber *_callForwardingNoReplyTime;
    NSNumber *_mmiProcedure;
    NSNumber *_callBarringFacility;
    NSNumber *_supplementaryServiceType;
    NSNumber *_callingLineIdRestriction;
    NSNumber *_callingLineIdRestrictionModification;
    NSNumber *_connectedLineIdRestriction;
    NSNumber *_callingNamePresentation;
    NSNumber *_connectedLinePresentation;
    NSNumber *_callingLinePresentation;
}

@property (retain, nonatomic) NSNumber *callForwardingReason;
@property (retain, nonatomic) NSNumber *callClass;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSString *callForwardingNumber;
@property (retain, nonatomic) NSNumber *callForwardingNoReplyTime;
@property (retain, nonatomic) NSNumber *mmiProcedure;
@property (retain, nonatomic) NSNumber *callBarringFacility;
@property (retain, nonatomic) NSNumber *supplementaryServiceType;
@property (retain, nonatomic) NSNumber *callingLineIdRestriction;
@property (retain, nonatomic) NSNumber *callingLineIdRestrictionModification;
@property (retain, nonatomic) NSNumber *connectedLineIdRestriction;
@property (retain, nonatomic) NSNumber *callingNamePresentation;
@property (retain, nonatomic) NSNumber *connectedLinePresentation;
@property (retain, nonatomic) NSNumber *callingLinePresentation;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
