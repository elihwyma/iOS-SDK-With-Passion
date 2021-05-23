/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPImageSet, CPTravelEstimates, NSArray, NSMeasurement, NSSet, NSUUID, UIImage;

@interface CPManeuver : NSObject

{
    CPImageSet *_symbolSet;
    UIImage *_junctionImage;
    NSArray *_instructionVariants;
    CPTravelEstimates *_initialTravelEstimates;
    NSArray *_attributedInstructionVariants;
    id _userInfo;
    NSUUID *_identifier;
    unsigned long long _maneuverType;
    NSArray *_roadFollowingManeuverVariants;
    unsigned long long _trafficSide;
    unsigned long long _junctionType;
    NSMeasurement *_junctionExitAngle;
    NSSet *_junctionElementAngles;
    long long _displayStyle;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) unsigned long long maneuverType;
@property (copy, nonatomic) NSArray *roadFollowingManeuverVariants;
@property (nonatomic) unsigned long long trafficSide;
@property (nonatomic) unsigned long long junctionType;
@property (copy, nonatomic) NSMeasurement *junctionExitAngle;
@property (copy, nonatomic) NSSet *junctionElementAngles;
@property (readonly) NSArray *stringInstructionVariants;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) CPImageSet *symbolSet;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) UIImage *junctionImage;
@property (copy, nonatomic) NSArray *instructionVariants;
@property (retain, nonatomic) CPTravelEstimates *initialTravelEstimates;
@property (copy, nonatomic) NSArray *attributedInstructionVariants;
@property (retain, nonatomic) id userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)_descriptionForManeuverType:(unsigned long long)arg1;
+ (id)_descriptionForTrafficSide:(unsigned long long)arg1;
+ (id)_descriptionForJunctionType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
