/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKViewElement.h>

@class NSSet, VUIViewElementDataSource;

@interface IKViewElement (VideosUI)

@property (nonatomic, readonly) VUIViewElementDataSource *vui_DataSource;
@property (copy, nonatomic, readonly) NSSet *vui_updateEventDescriptors;

+ (id)_vui_updateEventDescriptorWithType:(unsigned long long)arg1;

- (id)mediaInfoForEvent:(id)arg1 playbackContext:(unsigned long long)arg2 includingVideo:(_Bool)arg3;
- (id)vui_title;
- (id)vui_imageURL;
- (id)vui_description;
- (void)_parseElementIfNecessary;
- (id)_backgroundImageProxyFromImageElement:(id)arg1;

@end
