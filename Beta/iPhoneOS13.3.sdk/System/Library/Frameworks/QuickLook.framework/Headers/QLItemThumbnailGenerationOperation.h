/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QLAsynchronousOperation.h>

@class QLItem, UIImage;

@protocol QLItemThumbnailGeneratorProtocol;

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation

{
    UIImage *_thumbnail;
    id <QLItemThumbnailGeneratorProtocol> _generator;
    QLItem *_item;
    double _scale;
    struct CGSize _size;
}

@property (retain, nonatomic) id <QLItemThumbnailGeneratorProtocol> generator;
@property (retain, nonatomic) QLItem *item;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIImage *thumbnail;

- (void)main;
- (id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;

@end
