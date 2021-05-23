/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol _IKJSDevice <Swift>

@property (nonatomic, readonly) _Bool isInAirplaneMode;
@property (nonatomic, readonly) NSString *networkType;
@property (nonatomic, readonly) double lastNetworkChangedTime;
@property (nonatomic, readonly) _Bool isInRetailDemoMode;
@property (nonatomic, readonly) _Bool isSeedBuild;
@property (nonatomic, readonly) NSString *vendorID;
@property (nonatomic, readonly) NSNumber *pixelRatio;
@property (nonatomic, readonly) _Bool runningAnInternalBuild;
@property (nonatomic, readonly) NSString *osBuildNumber;

- (unsigned short)capacity: /* Error: Ran out of types for this method. */;

@end
