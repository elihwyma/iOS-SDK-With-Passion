//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISpriteTexture : NSObject
{
    float _height;
    float _width;
    id <MTLTexture> _texture;
}

@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
// - (void).cxx_destruct;
- (id)initWithImage:(id)arg1;

@end

