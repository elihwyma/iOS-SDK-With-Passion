/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIButton.h>

@class NSString, NSUUID, UITapGestureRecognizer;

@protocol CPSButtonDelegate;

@interface CPSButton : UIButton

{
    NSUUID *_identifier;
    id <CPSButtonDelegate> _delegate;
    UITapGestureRecognizer *_pressTapRecognizer;
    UITapGestureRecognizer *_touchTapRecognizer;
}

@property (retain, nonatomic) UITapGestureRecognizer *pressTapRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *touchTapRecognizer;
@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id <CPSButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)buttonWithType:(long long)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)_addGestureRecognizers;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_buttonSelected:(id)arg1 interactionModel:(unsigned long long)arg2;

@end
