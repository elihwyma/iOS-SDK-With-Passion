/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PLCloudUserSessionHandling;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject

{
    id <PLCloudUserSessionHandling> _sessionHandler;
}

@property (retain) id <PLCloudUserSessionHandling> sessionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)willSwitchUser;

@end
