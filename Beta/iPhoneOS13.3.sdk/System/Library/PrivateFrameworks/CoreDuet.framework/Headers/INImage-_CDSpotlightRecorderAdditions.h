/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Intents/INImage.h>

@class NSData;

@interface INImage (_CDSpotlightRecorderAdditions)

@property (copy, nonatomic, readonly) INImage *cd_dataImage;
@property (copy, nonatomic, readonly) NSData *cd_encodedDataImage;

@end
