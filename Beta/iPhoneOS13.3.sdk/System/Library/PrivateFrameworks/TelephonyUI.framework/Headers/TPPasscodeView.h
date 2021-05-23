/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView

{
    NSMutableString *_passcodeMutableString;
}

@property (retain) NSMutableString *passcodeMutableString;
@property (readonly) NSString *passcodeString;

- (void)clear;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)deleteLastCharacter;
- (void)appendCharacter:(id)arg1;

@end
