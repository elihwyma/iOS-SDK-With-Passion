/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionAvailableDimensionalLayoutSpace : NSObject

{
    int _axis;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) int axis;

- (id)initWithSize:(struct CGSize)arg1 axis:(int)arg2;

@end
