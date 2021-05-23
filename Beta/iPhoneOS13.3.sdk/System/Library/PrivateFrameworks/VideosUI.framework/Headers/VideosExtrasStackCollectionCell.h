/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle, VideosExtrasStackTemplateViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasStackCollectionCell : UICollectionViewCell

{
    NSArray *_fitConstraints;
    _Bool _needsViewWillAppear;
    VideosExtrasStackTemplateViewController *_parentViewController;
    VideosExtrasGridElementViewController *_viewController;
    VideosExtrasGridSectionHeaderStyle *_sectionStyle;
}

@property (retain, nonatomic) VideosExtrasStackTemplateViewController *parentViewController;
@property (retain, nonatomic) VideosExtrasGridElementViewController *viewController;
@property (nonatomic, readonly) VideosExtrasGridSectionHeaderStyle *sectionStyle;

- (void)willMoveToSuperview:(id)arg1;

@end
