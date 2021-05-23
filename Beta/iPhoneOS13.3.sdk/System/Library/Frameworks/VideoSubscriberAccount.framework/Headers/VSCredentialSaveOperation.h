/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation

{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSAccountStore *_accountStore;
}

@property (copy, nonatomic) NSArray *unsavedAccounts;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (retain, nonatomic) VSOptional *result;

- (id)init;
- (void)executionDidBegin;
- (void)_didSaveAccounts:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;

@end
