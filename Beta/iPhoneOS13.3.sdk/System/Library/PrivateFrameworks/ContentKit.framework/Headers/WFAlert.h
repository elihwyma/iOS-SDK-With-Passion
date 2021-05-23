/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSString, WFAlertButton;

@protocol WFAlertPresenter;

@interface WFAlert : NSObject

{
    _Bool _prefersItemPickerSheetPresentation;
    NSString *_title;
    NSString *_message;
    long long _preferredStyle;
    NSArray *_textFieldResults;
    id <WFAlertPresenter> _presenter;
    NSMutableArray *_mutableButtons;
    NSMutableArray *_mutableTextFieldConfigurationHandlers;
}

@property (nonatomic, readonly) WFAlertButton *escapeButton;
@property (weak, nonatomic) id <WFAlertPresenter> presenter;
@property (nonatomic, readonly) NSArray *textFieldConfigurationHandlers;
@property (nonatomic, readonly) NSError *associatedError;
@property (weak, nonatomic) id <WFAlertPresenter> presenter;
@property (retain, nonatomic) NSMutableArray *mutableButtons;
@property (retain, nonatomic) NSMutableArray *mutableTextFieldConfigurationHandlers;
@property (nonatomic) _Bool prefersItemPickerSheetPresentation;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long preferredStyle;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *textFieldResults;

+ (id)alertWithPreferredStyle:(long long)arg1;
+ (id)alertWithError:(id)arg1 confirmationHandler:(CDUnknownBlockType)arg2;
+ (id)alertWithError:(id)arg1;

- (id)init;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addButton:(id)arg1;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
