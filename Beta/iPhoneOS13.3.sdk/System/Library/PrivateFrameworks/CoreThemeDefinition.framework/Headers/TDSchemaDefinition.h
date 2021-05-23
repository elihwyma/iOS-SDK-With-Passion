/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property _Bool published;
@property (retain, nonatomic) TDSchemaCategory *category;
@property (retain, nonatomic) NSSet *parts;

+ (const CDStruct_e3362728 *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (unsigned long long)elementDefinitionCountWithSchema:(id)arg1;
+ (const CDStruct_e3362728 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2;

- (id)displayName;
- (id)previewImage;

@end
