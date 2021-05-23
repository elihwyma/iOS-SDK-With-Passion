/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase

{
    NSNumber *_statusLatitude;
    NSNumber *_statusLongitude;
    NSNumber *_statusHorizontalAccuracy;
    NSNumber *_statusVerticalAccuracy;
    NSNumber *_statusAltitude;
    NSNumber *_statusSpeed;
    NSNumber *_statusCourse;
    NSString *_statusTimestamp;
}

@property (copy, nonatomic) NSNumber *statusLatitude;
@property (copy, nonatomic) NSNumber *statusLongitude;
@property (copy, nonatomic) NSNumber *statusHorizontalAccuracy;
@property (copy, nonatomic) NSNumber *statusVerticalAccuracy;
@property (copy, nonatomic) NSNumber *statusAltitude;
@property (copy, nonatomic) NSNumber *statusSpeed;
@property (copy, nonatomic) NSNumber *statusCourse;
@property (copy, nonatomic) NSString *statusTimestamp;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;
+ (id)buildRequiredOnlyWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
