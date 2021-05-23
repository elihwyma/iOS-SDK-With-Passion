/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSString, SYSession, SYStore;

__attribute__((visibility("hidden")))
@interface SYStoreSessionOwner : NSObject

{
    NSDictionary *_context;
    NSDictionary *_idsOptions;
    SYStore *_store;
    CDUnknownBlockType _errorCallback;
    CDUnknownBlockType _onComplete;
    SYSession *_session;
}

@property (nonatomic, readonly) _Bool isResetSync;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSDictionary *idsOptions;
@property (weak, nonatomic) SYStore *store;
@property (copy, nonatomic) CDUnknownBlockType errorCallback;
@property (copy, nonatomic) CDUnknownBlockType onComplete;
@property (retain, nonatomic) SYSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (_Bool)syncSession:(id)arg1 rollbackChangesWithError:(id *)arg2;

@end
