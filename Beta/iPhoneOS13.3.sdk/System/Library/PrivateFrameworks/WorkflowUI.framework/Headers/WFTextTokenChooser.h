/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSSet, NSString, WFAlert, WFVariable;

@protocol WFUIKitUserInterface;

@interface WFTextTokenChooser : NSObject

{
    _Bool _showsClearButton;
    _Bool _showsDoneButton;
    _Bool _prefersItemPickerSheetPresentation;
    NSString *_title;
    NSString *_message;
    NSString *_noChoicesMessage;
    NSSet *_allowedVariableTypes;
    NSArray *_additionalButtons;
    WFVariable *_selectedVariable;
    NSIndexSet *_selectedButtonIndexes;
    CDUnknownBlockType _choiceHandler;
    CDUnknownBlockType _cancelHandler;
    WFAlert *_presentedAlert;
    NSArray *_auxiliaryButtons;
    id <WFUIKitUserInterface> _userInterface;
}

@property (retain, nonatomic) WFAlert *presentedAlert;
@property (copy, nonatomic) NSArray *auxiliaryButtons;
@property (weak, nonatomic) id <WFUIKitUserInterface> userInterface;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *noChoicesMessage;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (copy, nonatomic) NSArray *additionalButtons;
@property (nonatomic) _Bool showsClearButton;
@property (nonatomic) _Bool showsDoneButton;
@property (nonatomic) _Bool prefersItemPickerSheetPresentation;
@property (retain, nonatomic) WFVariable *selectedVariable;
@property (retain, nonatomic) NSIndexSet *selectedButtonIndexes;
@property (copy, nonatomic) CDUnknownBlockType choiceHandler;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;

- (id)init;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentWithVariableProvider:(id)arg1 variableUIDelegate:(id)arg2 userInterface:(id)arg3 fromSource:(id)arg4;
- (void)updateButtonsInAlert:(id)arg1;
- (id)alertButtonForVariable:(id)arg1 selected:(_Bool)arg2;

@end
