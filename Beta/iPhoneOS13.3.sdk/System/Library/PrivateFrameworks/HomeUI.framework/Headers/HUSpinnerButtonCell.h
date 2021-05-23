/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUButtonCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSString, UIActivityIndicatorView;

@protocol HUResizableCellDelegate;

@interface HUSpinnerButtonCell : HUButtonCell <Swift>

{
    _Bool _showSpinner;
    _Bool _useFullWidthSeparator;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool showSpinner;
@property (nonatomic) _Bool useFullWidthSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)_separatorFrame;
- (void)createSpinner;

@end
