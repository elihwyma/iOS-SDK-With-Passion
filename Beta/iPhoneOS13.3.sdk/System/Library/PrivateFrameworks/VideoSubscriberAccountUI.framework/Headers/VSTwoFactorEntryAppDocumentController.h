/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController

{
    NSMutableArray *_buttonElements;
}

@property (retain, nonatomic) NSMutableArray *buttonElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)_newViewModel;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (_Bool)_updateTwoFactorEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (void)twoFactorEntryViewModel:(id)arg1 didPressButtonAtIndex:(unsigned long long)arg2;

@end
