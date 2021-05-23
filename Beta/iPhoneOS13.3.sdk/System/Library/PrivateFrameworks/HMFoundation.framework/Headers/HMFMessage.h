/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFActivity, HMFMessageDestination, HMFMessageInternal, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessage

{
    HMFMessageInternal *_internal;
}

@property (nonatomic, readonly) HMFMessageInternal *internal;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMFMessageDestination *destination;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) long long qualityOfService;
@property (weak, nonatomic, readonly) HMFMessageTransport *transport;
@property (nonatomic, readonly) HMFActivity *activity;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSDictionary *headers;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)supportedClasses;
+ (id)activityNameWithMessageName:(id)arg1;
+ (id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
+ (id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)shortDescription;
- (id)errorForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1 keyPresent:(_Bool *)arg2;
- (id)timeZoneForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (void)__initWithInternalMessage:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;
- (_Bool)respondWithPayload:(id)arg1;
- (_Bool)respondWithError:(id)arg1;
- (_Bool)respondWithPayload:(id)arg1 error:(id)arg2;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)predicateForKey:(id)arg1;
- (id)arrayOfDateComponentsForKey:(id)arg1;

@end
