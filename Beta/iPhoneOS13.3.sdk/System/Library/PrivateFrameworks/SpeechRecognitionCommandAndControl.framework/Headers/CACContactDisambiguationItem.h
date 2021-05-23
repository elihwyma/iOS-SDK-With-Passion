/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACDisambiguationItem.h>

@class CNContact, CNLabeledValue, NSString;

@interface CACContactDisambiguationItem : CACDisambiguationItem

{
    CNContact *_contact;
    CNLabeledValue *_contactLabeledValue;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNLabeledValue *contactLabeledValue;
@property (readonly) NSString *contactDisplayLabel;
@property (readonly) NSString *contactDisplayValue;

- (id)displayName;
- (void)startInteraction;
- (id)displayDescription;
- (id)initWithContact:(id)arg1 labeledValue:(id)arg2 type:(long long)arg3;

@end
