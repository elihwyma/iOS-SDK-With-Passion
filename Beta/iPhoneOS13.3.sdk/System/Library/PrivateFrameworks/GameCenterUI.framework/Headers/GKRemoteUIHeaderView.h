/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView

{
    _Bool _isFirstSection;
    GKLabel *_textLabel;
    double _height;
    double _bottomMargin;
}

@property (nonatomic) _Bool isFirstSection;
@property (retain, nonatomic) GKLabel *textLabel;
@property (nonatomic) double height;
@property (nonatomic) double bottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAttributes:(id)arg1;
- (void)setSectionIsFirst:(_Bool)arg1;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end
