/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSDictionary, NSNumber, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPushPayload : NSObject

{
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_logKey;
    NSDictionary *_payload;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSNumber *accountIdentifier;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, readonly) NSDictionary *aps;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *URLString;

+ (id)actionTypeFromPayload:(id)arg1;

- (id)initWithPayload:(id)arg1;

@end
