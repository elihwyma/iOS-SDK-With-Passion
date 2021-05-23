/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSData;

@interface REMReplicaManagerSerializedData : NSObject <Swift>

{
    NSData *_managerData;
    unsigned long long _version;
}

@property (nonatomic, readonly) _Bool isRepresentingDiscardedReplicaManager;
@property (nonatomic, readonly) NSData *managerData;
@property (nonatomic, readonly) unsigned long long version;

+ (_Bool)supportsSecureCoding;
+ (id)serializedDataRepresentingDiscardedReplicaManager;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagerData:(id)arg1 version:(unsigned long long)arg2;

@end
