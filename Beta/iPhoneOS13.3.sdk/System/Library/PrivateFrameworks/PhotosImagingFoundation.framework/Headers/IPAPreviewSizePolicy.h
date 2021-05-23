/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class IPAImageSizePolicy, NSString;

@interface IPAPreviewSizePolicy : NSObject

{
    NSString *_name;
    id _style;
    IPAImageSizePolicy *_sizePolicy;
    CDUnknownBlockType _styleNeededThreshold;
    CDUnknownBlockType _styleProducedThreshold;
    NSString *_suffix;
}

@property (retain) NSString *suffix;
@property (readonly) NSString *name;

- (id)description;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (id)style;
- (struct PFIntSize_st)integralTransformSize:(struct CGSize)arg1;
- (id)initWithName:(id)arg1 style:(id)arg2 sizePolicy:(id)arg3 styleNeededThreshold:(CDUnknownBlockType)arg4 styleProducedThreshold:(CDUnknownBlockType)arg5;
- (id)initWithName:(id)arg1 suffix:(id)arg2 style:(id)arg3 sizePolicy:(id)arg4 styleNeededThreshold:(CDUnknownBlockType)arg5 styleProducedThreshold:(CDUnknownBlockType)arg6;
- (id)sizeTransformationPolicy;
- (_Bool)styleIsNeededForFullSize:(struct CGSize)arg1;
- (_Bool)styleCanBeProducedFromSize:(struct CGSize)arg1;
- (id)styleShouldBeProducedFrom:(CDUnknownBlockType)arg1;

@end
