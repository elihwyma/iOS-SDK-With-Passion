/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;

@protocol UNSHybridContentProtectionStrategyDelegate;

@interface UNSHybridContentProtectionStrategy : NSObject

{
    id <UNSHybridContentProtectionStrategyDelegate> _delegate;
    NSString *_minimumProtection;
    _Bool _needsMerge;
    UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)isProtectedDataAvailable;
- (id)_strategyForProtectionState;
- (_Bool)dataIsAvailableAtPath:(id)arg1;
- (id)dataAtPath:(id)arg1;
- (_Bool)writeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (void)importDataWithImportHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileProtectionType:(id)arg1 delegate:(id)arg2;
- (_Bool)_mergeIsSupported;

@end
