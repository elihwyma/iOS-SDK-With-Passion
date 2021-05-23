/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STSingleLineHeaderView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface STSingleLineDetailTextHeaderView : STSingleLineHeaderView

{
    UILabel *_detailLabel;
}

@property (nonatomic, readonly) UILabel *detailLabel;

- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;

@end
