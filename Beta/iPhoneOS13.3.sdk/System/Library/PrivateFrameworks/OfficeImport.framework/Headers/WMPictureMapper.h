/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

@class WDPicture;

__attribute__((visibility("hidden")))
@interface WMPictureMapper : CMDrawableMapper

{
    WDPicture *wdPicture;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (id)initWithWDPicture:(id)arg1 parent:(id)arg2;
- (void)mapBounds;

@end
