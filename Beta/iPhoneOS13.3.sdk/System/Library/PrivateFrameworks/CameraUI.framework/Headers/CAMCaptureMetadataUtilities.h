/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMCaptureMetadataUtilities : NSObject

+ (id)metadataFromRequest:(id)arg1;
+ (id)preciseCaptureDateFromStillImageMetadata:(id)arg1;
+ (void)removeUnwantedKeysForPersistenceFromMetadata:(id)arg1;
+ (id)metadataFromPanoramaRequest:(id)arg1;

@end
