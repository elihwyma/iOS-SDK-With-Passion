/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, NSString, TVImage;

@protocol VUIImageLoadParams;

__attribute__((visibility("hidden")))
@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation

{
    _Bool _cropToFit;
    TVImage *_image;
    unsigned long long _scalingResult;
    NSError *_error;
    id <VUIImageLoadParams> _params;
    struct CGSize _scaleToSize;
}

@property (retain, nonatomic) id <VUIImageLoadParams> params;
@property (nonatomic) struct CGSize scaleToSize;
@property (nonatomic) _Bool cropToFit;
@property (retain, nonatomic) TVImage *image;
@property (nonatomic) unsigned long long scalingResult;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;

@end
