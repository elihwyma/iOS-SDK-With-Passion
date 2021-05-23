/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray;

@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom

{
    _Bool _touchesWereCancelled;
    id <MFCorecipientsIndicatorAtomDelegate> _delegate;
    NSArray *_recipients;
}

@property (weak, nonatomic) id <MFCorecipientsIndicatorAtomDelegate> delegate;
@property (retain, nonatomic) NSArray *recipients;

- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithRecipients:(id)arg1;

@end
