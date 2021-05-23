/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@interface OBBundleManager : NSObject

+ (id)sharedManager;

- (id)allBundles;
- (id)bundleWithIdentifier:(id)arg1;
- (id)_bundleSearchPath;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(_Bool)arg1;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;
- (id)bundlesWithIdentifiers:(id)arg1;

@end
