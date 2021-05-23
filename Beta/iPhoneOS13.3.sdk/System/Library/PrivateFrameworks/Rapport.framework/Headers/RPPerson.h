/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CURangingMeasurement, NSArray, NSMutableDictionary, NSString;

@interface RPPerson : NSObject

{
    int _activityLevel;
    unsigned int _flags;
    int _proximity;
    NSString *_contactID;
    NSArray *_devices;
    NSString *_identifier;
    NSString *_name;
    CURangingMeasurement *_relativeLocation;
    struct NSMutableDictionary *_deviceDict;
}

@property (retain, nonatomic) NSMutableDictionary *deviceDict;
@property (copy, nonatomic) NSString *identifier;
@property (retain) CURangingMeasurement *relativeLocation;
@property (nonatomic, readonly) int activityLevel;
@property (copy, nonatomic, readonly) NSString *contactID;
@property (copy, nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) unsigned int flags;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int proximity;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)_updateDeviceDerivedInfo;
- (unsigned int)removeRPDevice:(id)arg1;
- (unsigned int)updateWithRPDevice:(id)arg1;

@end
