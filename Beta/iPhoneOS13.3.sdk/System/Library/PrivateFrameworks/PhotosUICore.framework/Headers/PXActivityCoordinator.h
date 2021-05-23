/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PXActivityCoordinator : NSObject

{
    NSMutableArray *_items;
}

+ (id)coordinatorForActivity:(id)arg1;

- (id)init;
- (void)registerItem:(id)arg1;
- (void)unregisterItem:(id)arg1;

@end
