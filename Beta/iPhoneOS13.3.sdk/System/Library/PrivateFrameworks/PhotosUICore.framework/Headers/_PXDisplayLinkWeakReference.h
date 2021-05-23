/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface _PXDisplayLinkWeakReference : NSObject

{
    id _object;
    SEL _selector;
}

@property (weak, nonatomic, readonly) id object;
@property (nonatomic, readonly) SEL selector;

- (void)handleDisplayLink:(id)arg1;
- (id)initWithObject:(id)arg1 selector:(SEL)arg2;

@end
