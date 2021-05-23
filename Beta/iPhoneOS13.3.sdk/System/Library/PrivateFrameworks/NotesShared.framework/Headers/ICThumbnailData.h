/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface ICThumbnailData : NSObject

{
    _Bool _showAsFileIcon;
    _Bool _isMovie;
    struct UIImage *_image;
    unsigned long long _imageScaling;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) _Bool showAsFileIcon;
@property (nonatomic) _Bool isMovie;

- (id)initWithImage:(struct UIImage *)arg1 imageScaling:(unsigned long long)arg2 showAsFileIcon:(_Bool)arg3 isMovie:(_Bool)arg4;

@end
