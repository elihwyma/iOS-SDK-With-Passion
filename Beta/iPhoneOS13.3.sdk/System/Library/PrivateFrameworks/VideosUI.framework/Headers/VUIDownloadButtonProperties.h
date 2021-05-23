/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VUIDownloadButtonProperties : NSObject

{
    _Bool _hasBorder;
    _Bool _enabled;
    _Bool _hasImage;
    _Bool _hasTitle;
    _Bool _indeterminate;
    UIImage *_image;
    NSString *_title;
    double _progress;
    unsigned long long _downloadState;
}

@property (nonatomic) _Bool hasBorder;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool hasImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool hasTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isInderminate) _Bool indeterminate;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long downloadState;

@end
