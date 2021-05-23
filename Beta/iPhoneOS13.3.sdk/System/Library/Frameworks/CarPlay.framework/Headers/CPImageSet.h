/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface CPImageSet : NSObject

{
    UIImage *_lightContentImage;
    UIImage *_darkContentImage;
}

@property (retain, nonatomic) UIImage *lightContentImage;
@property (retain, nonatomic) UIImage *darkContentImage;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)image;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 treatmentBlock:(CDUnknownBlockType)arg2;
- (id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2;
- (void)swapStyles;

@end
