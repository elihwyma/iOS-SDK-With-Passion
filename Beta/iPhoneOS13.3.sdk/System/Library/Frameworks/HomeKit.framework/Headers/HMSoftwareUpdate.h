/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, HMFSoftwareVersion, HMFUnfairLock, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSString, NSUUID, _HMContext;

@protocol HMSoftwareUpdateDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdate : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_identifier;
    NSUUID *_uniqueIdentifier;
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    HMSoftwareUpdateDocumentation *_documentation;
    id <HMSoftwareUpdateDelegate> _delegate;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    _HMContext *_context;
    HMAccessory *_accessory;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak) HMAccessory *accessory;
@property (copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (weak) id <HMSoftwareUpdateDelegate> delegate;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, readonly) HMFSoftwareVersion *version;
@property (readonly) long long state;
@property (readonly) unsigned long long downloadSize;
@property (readonly, getter=isDocumentationAvailable) _Bool documentationAvailable;
@property (readonly) HMSoftwareUpdateDocumentation *documentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setState:(long long)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)messageDestination;
- (void)configureWithContext:(id)arg1;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4;
- (void)_handleUpdatedState:(id)arg1;
- (void)_handleUpdatedDocumentationMetadata:(id)arg1;
- (void)_handleUpdatedDocumentation:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
- (void)requestDocumentation;
- (void)setDocumentation:(id)arg1;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2;
- (void)updateState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDocumentationMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
