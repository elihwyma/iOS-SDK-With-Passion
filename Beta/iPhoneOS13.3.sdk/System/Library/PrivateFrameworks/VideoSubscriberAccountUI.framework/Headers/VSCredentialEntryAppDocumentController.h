/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

@class NSArray, NSString, VSIKItemGroupElement;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryAppDocumentController : VSAppDocumentController

{
    VSIKItemGroupElement *_pickerElement;
    NSArray *_buttonElements;
}

@property (retain, nonatomic) VSIKItemGroupElement *pickerElement;
@property (retain, nonatomic) NSArray *buttonElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)itemGroup:(id)arg1 selectedItemIndexDidChange:(long long)arg2;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)_newViewModel;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_credentialEntryViewModelWithViewModel:(id)arg1;
- (_Bool)_updateCredentialEntryViewModel:(id)arg1 error:(id *)arg2;
- (_Bool)_updateCredentialEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (void)viewModel:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2;

@end
