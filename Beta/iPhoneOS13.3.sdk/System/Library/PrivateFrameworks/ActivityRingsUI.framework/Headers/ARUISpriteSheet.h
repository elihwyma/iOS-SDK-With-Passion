/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUISpriteTexture, NSArray;

@interface ARUISpriteSheet : NSObject

{
    float _size;
    ARUISpriteTexture *_texture;
    NSArray *_icons;
}

@property (nonatomic, readonly) ARUISpriteTexture *texture;
@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly) float size;

- (id)initWithTexture:(id)arg1 icons:(id)arg2 size:(float)arg3;

@end
