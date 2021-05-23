/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUCropAspect : NSObject

{
    double _width;
    double _height;
    NSString *_localizedName;
}

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double ratio;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)allAspectsWithOriginalSize:(struct CGSize)arg1 currentSize:(struct CGSize)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithWidth:(double)arg1 height:(double)arg2;
- (double)heightForWidth:(double)arg1;
- (id)_initWithWidth:(double)arg1 height:(double)arg2 localizedName:(id)arg3;
- (_Bool)isFreeformCrop;
- (_Bool)isEqualToCropAspect:(id)arg1;
- (_Bool)isEquivalentToCropAspect:(id)arg1;
- (double)widthForHeight:(double)arg1;
- (struct CGRect)constrainRect:(struct CGRect)arg1 boundingRect:(struct CGRect)arg2 boundingAngle:(double)arg3 minSize:(struct CGSize)arg4;
- (id)inverseAspect;

@end
