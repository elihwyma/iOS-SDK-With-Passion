/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (TextureDataLoading)

+ (id)currentNibPath;
+ (id)currentNibLoadingBundle;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;
+ (void)popNibPath;
+ (void)popNibLoadingBundle;

- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;

@end
