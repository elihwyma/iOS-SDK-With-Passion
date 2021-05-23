/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, PDScheduledActivityClient;

@interface PDScheduledActivityClient : NSObject <Swift>

{
    id <PDScheduledActivityClient> _clientInstance;
    NSObject<OS_dispatch_queue> *_activityQueue;
    NSMutableDictionary *_activityRegistrations;
}

@property (weak, nonatomic) id <PDScheduledActivityClient> clientInstance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSMutableDictionary *activityRegistrations;
@property (nonatomic, readonly) _Bool isValid;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2;

@end
