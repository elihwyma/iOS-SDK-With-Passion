/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMFeatureFlags : NSObject

+ (id)sharedInstance;

- (_Bool)certifiedDeliveryEnabled;
- (_Bool)manuallyAckMessagesEnabled;

@end
