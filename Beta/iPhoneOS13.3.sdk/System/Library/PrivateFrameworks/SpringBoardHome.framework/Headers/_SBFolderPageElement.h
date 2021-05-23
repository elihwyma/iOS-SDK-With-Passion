/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject

{
    _Bool _gridImagePossible;
    SBIconGridImage *_gridImage;
    unsigned long long _visibleRow;
    unsigned long long _pageIndex;
    SBFolderIcon *_folderIcon;
}

@property (retain, nonatomic) SBIconGridImage *gridImage;
@property (nonatomic, getter=isGridImagePossible) _Bool gridImagePossible;
@property (nonatomic) unsigned long long visibleRow;
@property (nonatomic) unsigned long long pageIndex;
@property (weak, nonatomic) SBFolderIcon *folderIcon;

- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)firstVisibleRowForGap;

@end
