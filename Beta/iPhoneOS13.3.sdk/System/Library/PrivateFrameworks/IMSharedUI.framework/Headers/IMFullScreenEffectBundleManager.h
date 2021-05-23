/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IMFullScreenEffectBundleManager : NSObject

{
    NSDictionary *_fullScreenMomentBundles;
    NSString *_bundleDirectory;
}

@property (retain, nonatomic) NSString *bundleDirectory;
@property (nonatomic, readonly) NSDictionary *fullScreenMomentBundles;

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)effectIdentifiersInPickerOrder;

- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;
- (id)loadEffectBundle:(id)arg1 error:(id *)arg2;
- (_Bool)loadAllBundlesFromPath:(id)arg1 bundles:(id *)arg2 error:(id *)arg3;
- (id)effectBundleForIdentifier:(id)arg1;
- (id)fullScreenMomentForIdentifier:(id)arg1;
- (id)localizedStringForKey:(id)arg1 fromBundleWithIdentifier:(id)arg2;
- (id)triggeredFullScreenEffectForType:(id)arg1;
- (_Bool)hasFullScreenMomentForIdentifier:(id)arg1;

@end
