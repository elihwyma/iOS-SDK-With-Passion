/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUImageRequesterChange : NSObject

{
    _Bool _imageDidChange;
    _Bool _imageIsFullQualityDidChange;
    _Bool _fullsizeImageDataDidChange;
    _Bool _fullsizeImageURLDidChange;
}

@property (nonatomic, setter=_setImageDidChange:) _Bool imageDidChange;
@property (nonatomic, setter=_setImageIsFullQualityDidChange:) _Bool imageIsFullQualityDidChange;
@property (nonatomic, setter=_setFullsizeImageDataDidChange:) _Bool fullsizeImageDataDidChange;
@property (nonatomic, setter=_setFullsizeImageURLDidChange:) _Bool fullsizeImageURLDidChange;
@property (nonatomic, readonly) _Bool changed;

@end
