/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@interface _SBRootFolderLayoutWrapperView : UIView

{
    double _statusBarHeightAdjustment;
    double _headerOffset;
    UIView *_wrappedView;
    struct CGSize _extendedSize;
}

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)layoutSubviews;
- (void)_updateLayout;

@end
