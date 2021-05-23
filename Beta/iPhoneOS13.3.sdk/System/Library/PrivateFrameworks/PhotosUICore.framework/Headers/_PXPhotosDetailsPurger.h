/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSPointerArray;

@interface _PXPhotosDetailsPurger : NSObject

{
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}

+ (id)sharedPurger;

- (id)init;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)purgeOldViewControllers;
- (void)detailsViewControllerDidAppear:(id)arg1;
- (void)_purgeAllViewControllers;

@end
