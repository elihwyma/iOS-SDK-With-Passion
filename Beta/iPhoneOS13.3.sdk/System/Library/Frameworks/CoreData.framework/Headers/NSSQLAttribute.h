/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLColumn.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic, readonly) NSSet *triggerKeys;

- (void)dealloc;
- (_Bool)isFileBackedFuture;
- (id)attributeDescription;
- (void)_setIsBackedByTrigger:(_Bool)arg1;
- (void)addKeyForTriggerOnRelationship:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (_Bool)shouldIndex;
- (_Bool)isDerivedAttribute;
- (_Bool)isBackedByTrigger;

@end
