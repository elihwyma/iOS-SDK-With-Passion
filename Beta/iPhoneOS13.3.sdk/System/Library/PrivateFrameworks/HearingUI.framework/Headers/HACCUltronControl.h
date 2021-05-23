/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIControl.h>

@class NSString, UILabel, UIView;

@protocol HACCContentModuleDelegate;

@interface HACCUltronControl : UIControl

{
    _Bool _isListening;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

- (_Bool)enabled;
- (_Bool)isRunning;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)buttonTapped:(id)arg1;
- (void)updateValue;
- (id)contentValue;

@end
