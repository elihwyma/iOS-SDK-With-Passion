/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>

@class IKTextFieldElement, NSString;

__attribute__((visibility("hidden")))
@interface VSITMLCredentialEntryField : VSCredentialEntryField

{
    IKTextFieldElement *_associatedTextFieldElement;
}

@property (retain, nonatomic) IKTextFieldElement *associatedTextFieldElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)textDidChangeForKeyboard:(id)arg1;

@end
