/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXGIndexSetArray : NSObject

{
    long long _capacity;
    long long _count;
    void **_indexSetReferences;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) void **indexSetReferences;

- (void)dealloc;
- (id)description;
- (void)removeAllIndexes;

@end
