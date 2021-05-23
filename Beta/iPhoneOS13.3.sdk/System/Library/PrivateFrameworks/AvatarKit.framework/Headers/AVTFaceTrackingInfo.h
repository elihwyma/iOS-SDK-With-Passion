/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject

{
    CDStruct_32896d86 *_trackingData;
    _Bool _deleteWhenDone;
    ARFrame *_arFrame;
    double _timestamp;
}

@property (nonatomic, readonly) ARFrame *arFrame;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) _Bool hasFaceTrackingData;

+ (id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3;
+ (id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 constrainHeadPose:(_Bool)arg4;
+ (id)trackingInfoWrappingTrackingData:(CDStruct_32896d86 *)arg1;
+ (id)trackingInfoWithARFrame:(id)arg1;
+ (id)trackingInfoWithARFrame:(id)arg1 orientation:(long long)arg2;

- (void)dealloc;
- (CDStruct_32896d86 *)trackingData;
- (void)discardARFrame;

@end
