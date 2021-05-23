/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CXCallDirectoryHostDelegate, OS_dispatch_queue;

@interface CXCallDirectoryHost : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallDirectoryHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_nsExtensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)synchronizeExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)compactStoreWithReply:(CDUnknownBlockType)arg1;
- (void)prepareStoreIfNecessary;

@end
