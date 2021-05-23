/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVGraphicsImageRenderer : NSObject

+ (id)preferredFormat;
+ (id)formatWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 cgContextActions:(CDUnknownBlockType)arg3;
+ (id)formatWithUIImage:(id)arg1;
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 cgContextActions:(CDUnknownBlockType)arg3;
+ (id)decodedImage:(id)arg1 opaque:(_Bool)arg2;

@end
