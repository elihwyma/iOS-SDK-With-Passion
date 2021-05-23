/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal

{
    _Bool _tapDissmissable;
    struct CGSize _preferredSize;
}

@property (nonatomic) struct CGSize preferredSize;
@property (nonatomic, getter=isTapDissmissable) _Bool tapDissmissable;

@end
