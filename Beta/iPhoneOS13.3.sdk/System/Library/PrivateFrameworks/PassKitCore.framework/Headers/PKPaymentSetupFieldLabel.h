/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

{
    NSString *_buttonTitle;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailBody;
    NSString *_businessChatButtonTitle;
    NSString *_businessChatIdentifier;
    NSString *_businessChatIntentName;
    unsigned long long _alingment;
}

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailBody;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName;
@property (nonatomic) unsigned long long alingment;
@property (copy, nonatomic, readonly) NSString *title;

- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (void)updateWithAttribute:(id)arg1;
- (id)submissionString;
- (_Bool)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;

@end
