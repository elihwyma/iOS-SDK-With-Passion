/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNWeakPointer : NSObject

{
    id weakRef;
}

@property (weak, nonatomic) id weakRef;

- (id)copyWeakRef;

@end
