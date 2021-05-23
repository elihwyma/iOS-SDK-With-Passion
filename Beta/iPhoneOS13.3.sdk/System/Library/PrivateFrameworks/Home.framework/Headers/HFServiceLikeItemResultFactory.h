/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFServiceLikeItemResultFactory : NSObject

+ (id)populateStandardResultsForHomeKitObject:(id)arg1 withBackingAccessory:(id)arg2 displayMetadata:(id)arg3 readResponse:(id)arg4 batteryLevelResults:(id)arg5 valueSource:(id)arg6 updateOptions:(id)arg7;
+ (void)_appendSoftwareUpdateResultsForAccessory:(id)arg1 toResults:(id)arg2;
+ (void)_appendDestinationURLResultsForHomeKitObject:(id)arg1 backingAccessory:(id)arg2 toResults:(id)arg3;

@end
