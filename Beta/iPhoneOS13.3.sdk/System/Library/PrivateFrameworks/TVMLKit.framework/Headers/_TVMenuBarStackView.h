/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIStackView.h>

@class NSArray;

@protocol _TVMenuBarStackViewDelegate;

@interface _TVMenuBarStackView : UIStackView

{
    id <_TVMenuBarStackViewDelegate> _delegate;
    unsigned long long _selectedIndex;
    NSArray *_tabBarItems;
}

@property (weak, nonatomic) id <_TVMenuBarStackViewDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) NSArray *tabBarItems;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_configureView;
- (void)_buttonEventTouchUpInside:(id)arg1;

@end
