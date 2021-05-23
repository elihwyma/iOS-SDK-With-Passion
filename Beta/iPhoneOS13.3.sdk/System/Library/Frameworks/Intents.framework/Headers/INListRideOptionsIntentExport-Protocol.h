/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark;

@protocol INListRideOptionsIntentExport <Swift>

@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;

- (unsigned short)init;

@end
