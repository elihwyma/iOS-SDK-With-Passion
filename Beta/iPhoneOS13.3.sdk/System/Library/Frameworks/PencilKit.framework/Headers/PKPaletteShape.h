/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface PKPaletteShape : NSObject

{
    UIImage *_image;
    long long _shapeType;
}

@property (readonly) long long shapeType;
@property (nonatomic, readonly) UIImage *image;

+ (id)shapeWithType:(long long)arg1;

- (id)initWithShapeType:(long long)arg1;

@end
