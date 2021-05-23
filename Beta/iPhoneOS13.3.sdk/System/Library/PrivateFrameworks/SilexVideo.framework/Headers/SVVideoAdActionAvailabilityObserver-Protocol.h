/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoAdActionAvailabilityObserver <Swift>

@property (nonatomic, readonly) _Bool hasActionAvailable;
@property (copy, nonatomic, setter=onAvailabilityChanged:) CDUnknownBlockType availabilityChangedBlock;

@end
