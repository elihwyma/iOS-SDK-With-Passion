/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASLocation : ASItem

{
    NSString *_displayName;
    NSString *_annotation;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_accuracy;
    NSString *_altitude;
    NSString *_altitudeAccuracy;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *annotation;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSString *longitude;
@property (retain, nonatomic) NSString *accuracy;
@property (retain, nonatomic) NSString *altitude;
@property (retain, nonatomic) NSString *altitudeAccuracy;

+ (_Bool)supportsSecureCoding;
+ (id)locationWithCalLocation:(void *)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (_Bool)isEmptyLocation;
- (id)initWithApplicationData:(id)arg1;
- (id)initWithCalLocation:(void *)arg1;

@end
