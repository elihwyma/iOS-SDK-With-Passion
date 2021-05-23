/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <NSObject.h>

@interface MSOnboardingUtil : NSObject

+ (_Bool)shouldShowOnboarding;
+ (id)viewControllerForMediaType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)markAsShown;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
