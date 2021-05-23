/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@class NSManagedObjectID;

@protocol _DPStorageMOConversion

@property (retain, nonatomic) NSManagedObjectID *objectId;
@property (nonatomic) _Bool submitted;

+ (unsigned short)entityName;
+ (unsigned short)createRecordFromManagedObject: /* Error: Ran out of types for this method. */;

- (unsigned short)entityName;
- (unsigned short)copyToManagedObject: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromManagedObject: /* Error: Ran out of types for this method. */;

@end
