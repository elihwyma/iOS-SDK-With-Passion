/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMFActivity, NSDictionary, NSString, NSUUID;

@interface HMBProcessingOptions : HMFObject

{
    _Bool _shouldPerformDelegateCallbacks;
    _Bool _shouldEnqueueMirrorOutput;
    _Bool _shouldRollBackIfMirrorOutputFails;
    _Bool _disallowsCellularAccessForMirrorOutput;
    NSString *_label;
    NSDictionary *_messagePayload;
    NSString *_messageName;
    CDUnknownBlockType _messageResponseHandler;
    NSUUID *_messageTransactionIdentifier;
    long long _qualityOfService;
    HMFActivity *_activity;
}

@property (nonatomic, readonly) NSString *label;
@property (retain, nonatomic) NSDictionary *messagePayload;
@property (retain, nonatomic) NSString *messageName;
@property (copy, nonatomic) CDUnknownBlockType messageResponseHandler;
@property (retain, nonatomic) NSUUID *messageTransactionIdentifier;
@property (nonatomic) _Bool shouldPerformDelegateCallbacks;
@property (nonatomic) _Bool shouldEnqueueMirrorOutput;
@property (nonatomic) _Bool shouldRollBackIfMirrorOutputFails;
@property (nonatomic) _Bool disallowsCellularAccessForMirrorOutput;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFActivity *activity;

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithLabel:(id)arg1;
+ (id)optionsWithMessage:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)attributeDescriptions;
- (id)transactionIdentifier;
- (void)callMessageResponseHandlerWithPayload:(id)arg1 error:(id)arg2;

@end
