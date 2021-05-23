/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

#import <CompanionSync/Swift-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SYLegacyStore;

@protocol OS_os_transaction;

@interface SYTransaction : NSObject <Swift>

{
    _Atomic _Bool _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    CDUnknownBlockType _completion;
    SYLegacyStore *_store;
    NSMutableArray *_changes;
}

@property (retain, nonatomic) SYLegacyStore *store;
@property (retain, nonatomic) NSMutableArray *changes;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (copy, nonatomic) NSDictionary *idsOptions;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObject:(id)arg1;
- (id)initWithStore:(id)arg1;
- (void)rollback;
- (void)commit;
- (_Bool)_beginTransaction;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)changeList;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commitBlocking:(_Bool)arg1 reportError:(CDUnknownBlockType)arg2;
- (void)_transactionDidComplete:(_Bool)arg1;
- (_Bool)_endTransaction;

@end
