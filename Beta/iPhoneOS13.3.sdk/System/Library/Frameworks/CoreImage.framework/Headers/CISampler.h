/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIFilterShape;

@interface CISampler : NSObject

{
    void *_priv;
}

@property (readonly) CIFilterShape *definition;
@property (readonly) struct CGRect extent;

+ (id)samplerWithImage:(id)arg1 options:(id)arg2;
+ (id)samplerWithImage:(id)arg1;
+ (id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void *)_internalRepresentation;
- (const void *)colorSpace;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 options:(id)arg2;
- (id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(char *)arg3;
- (id)initWithImage:(id)arg1 keysAndValues:(id)arg2;
- (id)opaqueShape;
- (id)wrapMode;

@end
