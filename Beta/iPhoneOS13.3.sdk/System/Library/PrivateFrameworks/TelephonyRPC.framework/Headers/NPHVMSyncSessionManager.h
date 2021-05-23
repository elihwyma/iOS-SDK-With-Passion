/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol NPHVMSessionDelegate;

@interface NPHVMSyncSessionManager : NSObject

{
    NSMutableArray *_deltaSyncChanges;
    NSMutableArray *_deltaSyncChangeTypes;
    unsigned long long _deltaSyncCurrentIdx;
    CDUnknownBlockType _completionCallback;
    _Bool _cancel;
    _Bool _sessionInvalidated;
    NSObject<NPHVMSessionDelegate> *_vmSessionDelegate;
    CDUnknownBlockType _vmSessionProgressCallback;
}

@property (nonatomic) NSObject<NPHVMSessionDelegate> *vmSessionDelegate;
@property (copy, nonatomic) CDUnknownBlockType vmSessionProgressCallback;
@property (nonatomic) _Bool sessionInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (id)dataFromChange:(id)arg1;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)enqueueVoicemailChanges:(id)arg1 changeType:(long long)arg2;

@end
