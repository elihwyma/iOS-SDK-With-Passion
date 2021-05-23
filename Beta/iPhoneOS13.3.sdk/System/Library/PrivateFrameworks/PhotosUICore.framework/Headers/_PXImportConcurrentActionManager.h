/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject

{
    NSMutableArray *_operations;
}

+ (id)sharedInstance;

- (id)init;
- (void)addOperation:(id)arg1;
- (void)removeOperation:(id)arg1;

@end
