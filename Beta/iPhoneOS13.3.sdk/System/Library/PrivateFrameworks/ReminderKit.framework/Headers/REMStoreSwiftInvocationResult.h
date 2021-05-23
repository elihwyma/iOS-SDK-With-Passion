/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSData, NSDictionary, REMFetchResultToken;

@interface REMStoreSwiftInvocationResult : NSObject <Swift>

{
    NSData *_resultData;
    NSDictionary *_resultStorages;
    REMFetchResultToken *_latestFetchResultToken;
}

@property (nonatomic, readonly) NSData *resultData;
@property (nonatomic, readonly) NSDictionary *resultStorages;
@property (nonatomic, readonly) REMFetchResultToken *latestFetchResultToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultData:(id)arg1 storages:(id)arg2 latestFetchResultToken:(id)arg3;

@end
