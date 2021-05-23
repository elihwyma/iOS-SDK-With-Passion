/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UINavigationController.h>

@class NSString;

@interface VUIAccessViewController : UINavigationController

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)resolveBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)_grantAccessToChannelIDs:(id)arg1 isReconsent:(_Bool)arg2;
+ (_Bool)_grantAccessToBundleIDs:(id)arg1;
+ (void)optInUser;
+ (_Bool)grantAccessToBundleIDs:(id)arg1;
+ (id)eligibleBundleIDs;

- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithChannels:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
