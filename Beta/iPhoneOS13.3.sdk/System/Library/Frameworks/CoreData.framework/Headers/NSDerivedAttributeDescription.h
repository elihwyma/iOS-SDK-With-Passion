/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSAttributeDescription.h>

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription

{
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}

@property (retain) NSExpression *derivationExpression;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)isTransient;
- (unsigned long long)_propertyType;
- (_Bool)isReadOnly;
- (id)filteringPredicate;
- (_Bool)_isSchemaEqual:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setTransient:(_Bool)arg1;
- (void)_validateKeypaths:(id)arg1;
- (void)setFilteringPredicate:(id)arg1;

@end
