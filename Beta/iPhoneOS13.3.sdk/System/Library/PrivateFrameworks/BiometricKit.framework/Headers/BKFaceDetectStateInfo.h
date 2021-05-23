/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject

{
    _Bool _faceDetected;
    _Bool _tooCloseToCamera;
    _Bool _tooFarFromCamera;
    _Bool _multipleFaces;
    _Bool _flare;
    _Bool _occlusion;
    _Bool _partiallyOutOfView;
    NSNumber *_pitch;
    NSNumber *_yaw;
    NSNumber *_roll;
    unsigned long long _orientation;
}

@property (nonatomic) _Bool faceDetected;
@property (nonatomic) _Bool tooCloseToCamera;
@property (nonatomic) _Bool tooFarFromCamera;
@property (nonatomic) _Bool multipleFaces;
@property (nonatomic) _Bool flare;
@property (nonatomic) _Bool occlusion;
@property (retain, nonatomic) NSNumber *pitch;
@property (retain, nonatomic) NSNumber *yaw;
@property (retain, nonatomic) NSNumber *roll;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic, readonly) _Bool partiallyOutOfView;

- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPresenceState:(_Bool)arg1;
- (id)initWithPresenceState:(_Bool)arg1 details:(id)arg2;
- (id)initFromFaceInfo:(const CDStruct_524073b0 *)arg1;

@end
