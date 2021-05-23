/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPhotosSharingViewControllerSpec : NSObject

@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) struct CGSize selectionBadgeSize;
@property (nonatomic, readonly) struct CGSize optionBadgeSize;
@property (nonatomic, readonly) struct UIOffset selectionBadgeOffset;
@property (nonatomic, readonly) unsigned long long selectionBadgeCorner;
@property (nonatomic, readonly) unsigned long long optionBadgeCorner;

- (_Bool)maximizeImageHeightForBounds:(struct CGRect)arg1;
- (double)interItemSpacingForWidth:(double)arg1;
- (_Bool)embedsActivityViewForBounds:(struct CGRect)arg1 horizontalSizeClass:(long long)arg2 verticalSizeClass:(long long)arg3;

@end
