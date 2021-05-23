/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DNDSClientDetails : NSObject

{
    _Bool _resolutionContextAssumingDeviceUILocked;
    _Bool _userInteractionClient;
    _Bool _persistentAssertionClient;
    _Bool _syncSuppressedClient;
    NSString *_clientIdentifier;
    NSArray *_identifiers;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly, getter=isResolutionContextAssumingDeviceUILocked) _Bool resolutionContextAssumingDeviceUILocked;
@property (nonatomic, readonly, getter=isUserInteractionClient) _Bool userInteractionClient;
@property (nonatomic, readonly, getter=isPersistentAssertionClient) _Bool persistentAssertionClient;
@property (nonatomic, readonly, getter=isSyncSuppressedClient) _Bool syncSuppressedClient;

+ (id)detailsForBundleAtURL:(id)arg1;
+ (id)detailsForClientIdentifier:(id)arg1 applicationBundleURL:(id)arg2;
+ (id)_detailsForBundleInfoDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(_Bool)arg3 userInteractionClient:(_Bool)arg4 persistentAssertionClient:(_Bool)arg5 syncSuppressedClient:(_Bool)arg6;

@end
