/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject

@property (readonly) long long changeID;
@property (copy, readonly) NSManagedObjectID *changedObjectID;
@property (readonly) long long changeType;
@property (copy, readonly) NSDictionary *tombstone;
@property (readonly) NSPersistentHistoryTransaction *transaction;
@property (copy, readonly) NSSet *updatedProperties;

+ (_Bool)supportsSecureCoding;
+ (id)fetchRequest;
+ (id)entityDescription;
+ (id)entityDescriptionWithContext:(id)arg1;
+ (id)shortStringForChangeType:(long long)arg1;
+ (id)stringForChangeType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
