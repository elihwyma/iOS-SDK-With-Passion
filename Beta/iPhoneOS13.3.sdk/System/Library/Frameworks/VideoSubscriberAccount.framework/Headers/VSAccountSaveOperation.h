/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperation, VSAccountChannels, VSOptional, VSPersistentStorage;

@interface VSAccountSaveOperation : VSAsyncOperation

{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSPersistentStorage *_storage;
    VSAccountChannels *_unsavedChannels;
    NSOperation *_currentOperation;
}

@property (copy, nonatomic) NSArray *unsavedAccounts;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSAccountChannels *unsavedChannels;
@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperation *currentOperation;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3;
- (void)_startAccountChannelsSaveOperation;
- (void)_startCredentialSaveOperation;

@end
