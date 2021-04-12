//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/_TVSearchBarDelegate-Protocol.h>

@class IKTextFieldElement, UITextField;

__attribute__((visibility("hidden")))
@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate>
{
    IKTextFieldElement *_viewElement;
}

@property(readonly, retain, nonatomic) IKTextFieldElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (void)_updateKeyboardWithUserText;
- (void)_updateUserText;
- (void)_updateViewLayout;
- (void)searchBarDidChangeText:(id)arg1;
- (void)loadView;
- (void)textDidChangeForKeyboard:(id)arg1;
@property(readonly, retain, nonatomic) UITextField *textField;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

@end

