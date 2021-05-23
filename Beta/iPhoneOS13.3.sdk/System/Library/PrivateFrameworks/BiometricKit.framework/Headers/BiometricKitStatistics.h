/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface BiometricKitStatistics : NSObject

{
    _Bool _fingerOn;
    _Bool _enrolling;
    _Bool _badImagePerFingerDown;
    NSDate *_enrollmentStarTime;
    unsigned int _touchesPerEnroll;
    unsigned int _badImagesPerEnroll;
    unsigned int _rejectedImagesPerEnroll;
    unsigned int _primaryClusterAdditions;
    unsigned int _primaryClusterFailedAdditions;
    unsigned int _otherClustersAdditions;
    unsigned int _joinEvents;
    double _area;
    double _primaryClusterArea;
}

+ (id)statistics;

- (id)init;
- (void)initEnrollmentValues;
- (void)enroll:(int)arg1;
- (void)enrollResult:(id)arg1 componentSet:(CDStruct_87aaca7b *)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)enrollProgress:(id)arg1;

@end
