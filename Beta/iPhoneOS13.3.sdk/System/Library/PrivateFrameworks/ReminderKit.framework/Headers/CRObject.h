/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface CRObject : NSObject <Swift>

{
    NSUUID *_identity;
    NSDictionary *_fields;
}

@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)CRProperties;
+ (id)keyFromSelector:(SEL)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setupConstraintsFor:(id)arg1 in:(id)arg2;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (void)mergeWithObject:(id)arg1;
- (void)setFieldKey:(id)arg1 value:(id)arg2;

@end
