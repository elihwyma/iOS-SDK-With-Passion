/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLBag, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ISBiometricOptInOperation

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _promptUser;
    CDUnknownBlockType _resultBlock;
    ISURLBag *_urlBag;
    NSString *_topicName;
    NSString *_userAgent;
}

@property _Bool promptUser;
@property (copy) NSString *topicName;
@property (copy) NSString *userAgent;
@property (copy) CDUnknownBlockType resultBlock;

- (id)init;
- (void)run;
- (void)_loadURLBag;
- (_Bool)_performOptInDialogOperationWithError:(id *)arg1;
- (_Bool)_performPasscodeDialogOperationWithError:(id *)arg1;
- (void)_updateTouchIDSettingsForAccount:(id)arg1;
- (id)_newSourceByStartingTimeoutTimer;
- (void)_performOptInDialogMetricsWithResult:(_Bool)arg1 error:(id)arg2;

@end
