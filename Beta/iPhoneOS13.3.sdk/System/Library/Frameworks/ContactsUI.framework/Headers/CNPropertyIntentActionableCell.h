/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell

{
    NSArray *_actions;
}

@property (retain, nonatomic) NSArray *actions;

- (id)defaultContext;
- (_Bool)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)updateTransportButtons;
- (id)transportsMapping;
- (void)transportButton1Clicked:(id)arg1;
- (void)transportButton2Clicked:(id)arg1;
- (void)transportButton3Clicked:(id)arg1;

@end
