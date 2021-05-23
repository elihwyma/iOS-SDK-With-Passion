/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSString, UILabel;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane

{
    double _marginInset;
    UILabel *_infoLabel;
    unsigned long long _internalInfoLabelType;
}

@property (nonatomic, readonly) UILabel *infoLabel;
@property (nonatomic) unsigned long long internalInfoLabelType;
@property (copy, nonatomic) NSString *string;
@property (nonatomic) double marginInset;
@property (nonatomic) unsigned long long infoLabelType;

- (id)initWithString:(id)arg1;
- (id)titleFont;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (id)infoLabelWithString:(id)arg1;
- (id)messageFont;
- (void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2;

@end
