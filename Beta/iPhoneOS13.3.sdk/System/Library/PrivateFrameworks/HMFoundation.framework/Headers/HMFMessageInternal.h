/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFActivity, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessageInternal

{
    NSUUID *_identifier;
    NSString *_name;
    double _timeout;
    long long _qualityOfService;
    HMFMessageDestination *_destination;
    HMFMessageTransport *_transport;
    HMFActivity *_activity;
    NSDictionary *_userInfo;
    NSDictionary *_headers;
    NSDictionary *_messagePayload;
    CDUnknownBlockType _responseHandler;
}

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

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
