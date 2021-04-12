//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <HearingUI/HACCContentModule-Protocol.h>

@class UILabel, UIView;
@protocol HACCContentModuleDelegate;

@interface HACCUltronControl : UIControl <HACCContentModule>
{
    BOOL _isListening;
    NSUInteger module;
    id <HACCContentModuleDelegate> delegate;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) NSUInteger module; // @synthesize module;
// - (void).cxx_destruct;
- (BOOL)isRunning;
- (BOOL)enabled;
- (id)contentValue;
- (void)updateValue;
- (void)updateConstraints;
- (void)buttonTapped:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

