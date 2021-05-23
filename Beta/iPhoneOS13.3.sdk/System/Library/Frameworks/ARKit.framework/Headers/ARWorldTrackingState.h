/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@interface ARWorldTrackingState : NSObject <Swift>

{
    _Bool _majorRelocalization;
    _Bool _minorRelocalization;
    _Bool _poseGraphUpdated;
    long long _state;
    long long _reason;
    long long _vioTrackingState;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
}

@property (nonatomic) long long state;
@property (nonatomic) long long reason;
@property (nonatomic) _Bool majorRelocalization;
@property (nonatomic) _Bool minorRelocalization;
@property (nonatomic) _Bool poseGraphUpdated;
@property (nonatomic) long long vioTrackingState;
@property (nonatomic) double lastMajorRelocalizationTimestamp;
@property (nonatomic) double originTimestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
