/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSFetchIndexDescription, NSPropertyDescription, NSString;

@interface NSFetchIndexElementDescription : NSObject <Swift>

{
    NSPropertyDescription *_property;
    NSString *_propertyName;
    unsigned long long _collationType;
    NSFetchIndexDescription *_indexDescription;
    struct __indexElementDescriptionFlags {
        unsigned int _ascending:1;
        unsigned int _propertyIsRetained:1;
        unsigned int _unique:1;
        unsigned int _reservedEntityDescription:29;
    } _indexElementDescriptionFlags;
}

@property (retain, readonly) NSPropertyDescription *property;
@property (retain, readonly) NSString *propertyName;
@property unsigned long long collationType;
@property (getter=isAscending) _Bool ascending;
@property (nonatomic, readonly) NSFetchIndexDescription *indexDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setAscending:(_Bool)arg1;
- (_Bool)_isEditable;
- (void)_throwIfNotEditable;
- (id)initWithPropertyName:(id)arg1 collationType:(unsigned long long)arg2;
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;
- (id)initWithPropertyName:(id)arg1 property:(id)arg2 collationType:(unsigned long long)arg3 ascending:(_Bool)arg4;
- (void)_setIsUnique:(_Bool)arg1;
- (void)_setIndexDescription:(id)arg1;
- (_Bool)_isUnique;
- (void)_setUniqueBit:(_Bool)arg1;
- (void)_validateCollationType:(unsigned long long)arg1 forProperty:(id)arg2;
- (id)_resolveProperty;

@end
