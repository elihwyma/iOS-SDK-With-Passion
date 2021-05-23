/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationMultiwindowService : NSObject

{
    FBServiceClientAuthenticator *_serviceClientAccessEntitlementAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)applicationServer:(id)arg1 client:(id)arg2 showAllWindowsForBundleIdentifier:(id)arg3;

@end
