/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISpriteTexture : NSObject

{
    float _height;
    float _width;
    id <MTLTexture> _texture;
}

@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) id <MTLTexture> texture;

- (id)initWithImage:(id)arg1;

@end
