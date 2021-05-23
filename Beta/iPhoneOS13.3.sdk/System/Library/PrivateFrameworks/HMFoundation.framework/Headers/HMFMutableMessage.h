/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFMessage.h>

@class HMFActivity, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMutableMessage : HMFMessage

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timeout;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFMessageDestination *destination;
@property (weak, nonatomic) HMFMessageTransport *transport;
@property (retain, nonatomic) HMFActivity *activity;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;

@end
