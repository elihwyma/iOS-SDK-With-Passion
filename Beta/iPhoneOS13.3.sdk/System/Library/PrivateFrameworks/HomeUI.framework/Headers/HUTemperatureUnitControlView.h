/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@protocol HUControlViewDelegate;

@interface HUTemperatureUnitControlView : UIView

{
    _Bool _canBeHighlighted;
    _Bool _viewDisabled;
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    long long _currentUnit;
    NSArray *_labelConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (nonatomic) long long currentUnit;
@property (nonatomic) _Bool viewDisabled;
@property (copy, nonatomic) NSArray *labelConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeHighlighted;

+ (Class)valueClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)_unitStringForCurrentUnit;

@end
