/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedImage.h>

@interface CUINamedMultisizeImage : CUINamedImage

{
    struct CGSize _nextSizeSmaller;
}

@property (nonatomic) struct CGSize nextSizeSmaller;

- (id)debugDescription;

@end
