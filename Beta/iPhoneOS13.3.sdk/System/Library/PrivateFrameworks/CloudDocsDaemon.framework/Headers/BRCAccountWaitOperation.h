/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class CKContainer, NSObject, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCAccountWaitOperation : _BRCOperation

{
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    _Bool _resumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_accountDidChange;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (void)_accountChangeHandler;
- (id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2;
- (id)initWithCKContainer:(id)arg1;

@end
