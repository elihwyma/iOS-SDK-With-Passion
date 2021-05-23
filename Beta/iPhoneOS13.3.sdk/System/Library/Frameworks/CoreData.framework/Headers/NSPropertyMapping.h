/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSExpression, NSString;

@interface NSPropertyMapping : NSObject

{
    void *_reserved;
    NSArray *_transformValidations;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedPropertyMapping:31;
    } _propertyMappingFlags;
}

@property (copy) NSString *name;
@property (retain) NSExpression *valueExpression;
@property (retain) NSDictionary *userInfo;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_setTransformValidations:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)_propertyTransforms;
- (id)_transformValidations;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;

@end
