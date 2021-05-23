/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@class CLHeading, CLLocation;

@protocol CAMMutableCaptureRequestLocation <Swift>

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLHeading *heading;

@end
