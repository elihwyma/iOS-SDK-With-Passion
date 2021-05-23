/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUViewControllerSpecChange : NSObject

{
    _Bool _traitCollectionChanged;
    _Bool _layoutReferenceSizeChanged;
    _Bool _layoutStyleChanged;
    _Bool _presentedForSecondScreenChanged;
    _Bool _secondScreenSizeChanged;
    _Bool _prefersCompactLayoutForSplitScreenChanged;
}

@property (nonatomic, readonly) _Bool changed;
@property (nonatomic) _Bool traitCollectionChanged;
@property (nonatomic) _Bool layoutReferenceSizeChanged;
@property (nonatomic) _Bool layoutStyleChanged;
@property (nonatomic) _Bool presentedForSecondScreenChanged;
@property (nonatomic) _Bool secondScreenSizeChanged;
@property (nonatomic) _Bool prefersCompactLayoutForSplitScreenChanged;

@end
