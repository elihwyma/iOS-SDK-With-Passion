/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTMobileEquipmentInfo : NSObject

{
    long long _slotId;
    NSString *_currentMobileId;
    NSString *_currentSubscriberId;
    NSString *_IMEI;
    NSString *_ICCID;
    NSString *_IMSI;
    NSString *_cdmaIMSI;
    NSString *_MEID;
    NSString *_EUIMID;
    NSNumber *_PRLVersion;
    NSNumber *_ERIVersion;
    NSString *_MIN;
    NSString *_NAI;
    NSString *_baseVersion;
    NSString *_baseId;
    NSString *_baseProfile;
    NSString *_effectiveICCID;
    NSString *_CSN;
    NSString *_displayCSN;
}

@property (nonatomic) long long slotId;
@property (retain, nonatomic) NSString *currentMobileId;
@property (retain, nonatomic) NSString *currentSubscriberId;
@property (retain, nonatomic) NSString *IMEI;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *IMSI;
@property (retain, nonatomic) NSString *cdmaIMSI;
@property (retain, nonatomic) NSString *MEID;
@property (retain, nonatomic) NSString *EUIMID;
@property (retain, nonatomic) NSNumber *PRLVersion;
@property (retain, nonatomic) NSNumber *ERIVersion;
@property (retain, nonatomic) NSString *MIN;
@property (retain, nonatomic) NSString *NAI;
@property (retain, nonatomic) NSString *baseVersion;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *baseProfile;
@property (retain, nonatomic) NSString *effectiveICCID;
@property (retain, nonatomic) NSString *CSN;
@property (retain, nonatomic) NSString *displayCSN;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
