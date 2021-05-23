/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject

{
    NSUUID *_id;
    SUAutoInstallForecast *_forecast;
    int _agreementStatus;
}

@property (retain, nonatomic) NSUUID *id;
@property (retain, nonatomic) SUAutoInstallForecast *forecast;
@property (nonatomic) int agreementStatus;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
