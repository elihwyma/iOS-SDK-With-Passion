/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIImageView.h>

@class SBFolderIconImageView, _SBFolderPageElement;

@interface _SBIconGridWrapperView : UIImageView

{
    _SBFolderPageElement *_element;
    SBFolderIconImageView *_folderIconImageView;
}

@property (retain, nonatomic) _SBFolderPageElement *element;
@property (weak, nonatomic) SBFolderIconImageView *folderIconImageView;

- (void)reposition;
- (void)positionAtRow:(unsigned long long)arg1;

@end
