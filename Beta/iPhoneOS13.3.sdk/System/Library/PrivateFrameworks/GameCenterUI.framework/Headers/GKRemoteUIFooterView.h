/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView

{
    _Bool _shouldApplyGameCenterTheme;
    int _layoutStyle;
    GKLabel *_textLabel;
    double _leftMargin;
    double _rightMargin;
    double _bottomMargin;
    double _paragraphMargin;
}

@property (retain, nonatomic) GKLabel *textLabel;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double paragraphMargin;
@property (nonatomic) _Bool shouldApplyGameCenterTheme;
@property (nonatomic) int layoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAttributes:(id)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;

@end
