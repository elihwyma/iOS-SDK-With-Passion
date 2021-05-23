/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID, _DKSource;

@interface _DKObject : NSObject

{
    NSUUID *_UUID;
    _DKSource *_source;
    NSDate *_creationDate;
    NSDate *_localCreationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSUUID *UUID;
@property (retain) _DKSource *source;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *localCreationDate;

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;

- (double)doubleValue;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)boolValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (long long)integerValue;
- (id)toPBCodable;
- (long long)typeCode;
- (id)entityName;
- (_Bool)copyToManagedObject:(id)arg1;
- (_Bool)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;

@end
