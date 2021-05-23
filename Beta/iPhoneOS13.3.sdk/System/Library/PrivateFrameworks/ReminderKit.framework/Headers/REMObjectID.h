/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface REMObjectID : NSObject <Swift>

{
    NSUUID *_uuid;
    NSString *_entityName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSURL *urlRepresentation;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)objectIDWithURL:(id)arg1;
+ (id)objectIDWithUUID:(id)arg1 entityName:(id)arg2;
+ (void)rem_registerClassAtCRCoderIfNeeded;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 entityName:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;

@end
