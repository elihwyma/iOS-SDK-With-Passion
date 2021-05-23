/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMessageDestination, NSArray, NSObject, NSString;

@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMessageHandler

{
    unsigned long long _hash;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMFMessageReceiver> _receiver;
    NSString *_name;
    HMFMessageDestination *_destination;
    NSArray *_policies;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, readonly) id <HMFMessageReceiver> receiver;
@property (copy, readonly) NSString *name;
@property (copy, readonly) HMFMessageDestination *destination;
@property (copy, readonly) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (_Bool)invokeWithMessage:(id)arg1;
- (id)initWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3;

@end
