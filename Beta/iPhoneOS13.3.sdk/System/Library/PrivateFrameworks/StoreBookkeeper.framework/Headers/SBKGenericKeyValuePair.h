/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject

{
    NSString *_kvsKey;
    NSData *_kvsPayload;
}

@property (nonatomic, readonly) NSString *kvsKey;
@property (nonatomic, readonly) NSData *kvsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (id)kvsValueDescription;

@end
