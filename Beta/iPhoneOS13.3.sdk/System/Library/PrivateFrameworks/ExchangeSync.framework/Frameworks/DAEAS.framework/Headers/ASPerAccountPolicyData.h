/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ASPerAccountPolicyData : NSObject

{
    NSString *_accountPersistentUUID;
}

@property (nonatomic, readonly) NSString *policyKey;
@property (nonatomic, readonly) NSDictionary *policyValues;

- (id)description;
- (id)initWithAccountPersistentUUID:(id)arg1;
- (void)setPolicyKey:(id)arg1 policyValues:(id)arg2;

@end
