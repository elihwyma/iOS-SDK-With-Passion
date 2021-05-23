/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class FBSServiceFacilityClient;

@interface SSUIServiceClient : NSObject

{
    FBSServiceFacilityClient *_facilityClient;
}

- (id)init;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
