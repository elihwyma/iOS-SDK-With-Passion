/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ISIconSpecification : NSObject

{
    double _maxScale;
    double _minScale;
    NSArray *_imageSpecifications;
    struct CGSize _maxSize;
    struct CGSize _minSize;
}

@property (readonly) NSArray *imageSpecifications;
@property (readonly) struct CGSize maxSize;
@property (readonly) struct CGSize minSize;
@property (readonly) double maxScale;
@property (readonly) double minScale;
@property (readonly) NSArray *allImageSpecifications;

+ (id)macosIconSpecification;
+ (id)macosTemplateIconSpecification;
+ (id)defaultIconSpecification;

- (id)_initWithImageSpecifiactions:(id)arg1;
- (id)imageSpecificationForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
