/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage

{
    NSData *_data;
}

@property (nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 wallpaperData:(id)arg3;
- (id)initWithImage:(id)arg1 wallpaperData:(id)arg2;
- (id)initWithWallpaperData:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
