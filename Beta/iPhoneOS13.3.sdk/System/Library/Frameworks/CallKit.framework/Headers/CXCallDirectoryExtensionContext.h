/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSExtensionContext.h>

@class CXCallDirectoryMutableLabeledPhoneNumberEntryData, CXCallDirectoryMutablePhoneNumberEntryData, NSString;

@protocol CXCallDirectoryExtensionContextDelegate;

@interface CXCallDirectoryExtensionContext : NSExtensionContext

{
    _Bool _incremental;
    _Bool _hasQueriedIsIncremental;
    id <CXCallDirectoryExtensionContextDelegate> _delegate;
    CXCallDirectoryMutablePhoneNumberEntryData *_pendingBlockingEntryData;
    long long _pendingBlockingEntryChangeType;
    CXCallDirectoryMutableLabeledPhoneNumberEntryData *_pendingIdentificationEntryDataForAddition;
    CXCallDirectoryMutablePhoneNumberEntryData *_pendingIdentificationEntryDataForRemoval;
    long long _pendingIdentificationEntryChangeType;
    CDUnknownBlockType _remoteObjectProxyGenerator;
}

@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData;
@property (nonatomic) long long pendingBlockingEntryChangeType;
@property (retain, nonatomic) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition;
@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval;
@property (nonatomic) long long pendingIdentificationEntryChangeType;
@property (nonatomic) _Bool hasQueriedIsIncremental;
@property (copy, nonatomic) CDUnknownBlockType remoteObjectProxyGenerator;
@property (weak, nonatomic) id <CXCallDirectoryExtensionContextDelegate> delegate;
@property (nonatomic, readonly, getter=isIncremental) _Bool incremental;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (oneway void)requestFailedWithError:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_flushPendingBlockingEntryData;
- (void)_flushPendingIdentificationEntryData;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)appendBlockingEntryPhoneNumber:(long long)arg1 changeType:(long long)arg2;
- (void)_performBlockIfIncremental:(CDUnknownBlockType)arg1 usingSelectorForExceptionMessage:(SEL)arg2;
- (void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)arg1;
- (void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)arg1;
- (void)removeBlockingEntryWithPhoneNumber:(long long)arg1;
- (void)removeAllBlockingEntries;
- (void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)removeIdentificationEntryWithPhoneNumber:(long long)arg1;
- (void)removeAllIdentificationEntries;
- (void)completeRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
