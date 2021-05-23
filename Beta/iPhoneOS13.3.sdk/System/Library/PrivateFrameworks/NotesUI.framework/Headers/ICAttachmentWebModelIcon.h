/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject

{
    _Bool _scaleImageToIconSize;
    NSURL *_url;
    double _scale;
    struct UIImage *_image;
    struct CGSize _size;
}

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) _Bool scaleImageToIconSize;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIImage *image;

- (id)description;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithFallbackURL:(id)arg1 withSize:(struct CGSize)arg2;

@end
