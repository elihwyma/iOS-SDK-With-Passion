/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKObjectBoundsContext : NSObject

{
    vector_554e3200 _points;
    struct VKEdgeInsets _edgePadding;
}

@property (nonatomic) struct VKEdgeInsets edgePadding;

- (_Bool)isEmpty;
- (id).cxx_construct;
- (CDStruct_02837cd9)boundingRect;
- (void)addPoints:(const vector_554e3200 *)arg1;

@end
