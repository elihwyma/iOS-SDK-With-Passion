/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject

{
    NSString *_iccid;
}

@property (retain, nonatomic) NSString *iccid;

+ (id)referenceFromCellularPlanPendingTransfer:(id)arg1;
+ (id)referenceFromPlanItem:(id)arg1;
+ (id)referenceFromDanglingPlanItem:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1;

@end
