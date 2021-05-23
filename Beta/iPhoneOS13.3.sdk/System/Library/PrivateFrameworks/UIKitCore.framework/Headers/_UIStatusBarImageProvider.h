/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarImageProvider : NSObject

+ (id)sharedProvider;

- (id)imageNamed:(id)arg1 styleAttributes:(id)arg2;
- (struct UIEdgeInsets)_alignmentInsetsForImageNamed:(id)arg1 styleAttributes:(id)arg2;
- (_Bool)_suppressHairlineThickeningForImageName:(id)arg1 styleAttributes:(id)arg2;

@end
