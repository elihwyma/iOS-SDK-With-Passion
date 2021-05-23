/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSObject, NSString;

@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface NSCKMetadataEntry : NSManagedObject

@property (retain, nonatomic) NSNumber *boolValueNum;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool boolValue;
@property (retain, nonatomic) NSObject<NSSecureCoding> *transformedValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSDate *dateValue;

+ (id)entityPath;
+ (id)entryForKey:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)entriesForKeys:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)insertMetadataEntryWithKey:(id)arg1 boolValue:(_Bool)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4;
+ (id)insertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4;
+ (id)updateOrInsertMetadataEntryWithKey:(id)arg1 boolValue:(_Bool)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)entriesForKeys:(id)arg1 onlyFetchingProperties:(id)arg2 fromStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)_insertMetadataEntryWithKey:(id)arg1 forStore:(id)arg2 intoManagedObjectContext:(id)arg3;
+ (id)_updateOrInsertMetadataEntryWithKey:(id)arg1 valueSettingBlock:(CDUnknownBlockType)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)insertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4;
+ (id)insertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4;
+ (id)updateOrInsertMetadataEntryWithKey:(id)arg1 stringValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)updateOrInsertMetadataEntryWithKey:(id)arg1 transformedValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)updateOrInsertMetadataEntryWithKey:(id)arg1 integerValue:(id)arg2 forStore:(id)arg3 intoManagedObjectContext:(id)arg4 error:(id *)arg5;

- (id)describeValue;

@end
