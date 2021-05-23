/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

#import <DoNotDisturbServer/Swift-Protocol.h>

@class DNDSClientDetailsProvider, DNDSModeAssertionStore, NSString;

@protocol DNDSBackingStore;

@interface DNDSModeAssertionManager : NSObject <Swift>

{
    id <DNDSBackingStore> _backingStore;
    DNDSModeAssertionStore *_store;
    DNDSClientDetailsProvider *_clientDetailsProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *sysdiagnoseDataIdentifier;

- (void)dealloc;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)initWithBackingStore:(id)arg1 clientDetailsProvider:(id)arg2;
- (void)_loadDataFromBackingStore;
- (id)updateModeAssertionsWithContextHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_saveDataToBackingStoreWithError:(id *)arg1;
- (id)initWithBackingStoreURL:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)clientDetailsForClientIdentifier:(id)arg1;

@end
