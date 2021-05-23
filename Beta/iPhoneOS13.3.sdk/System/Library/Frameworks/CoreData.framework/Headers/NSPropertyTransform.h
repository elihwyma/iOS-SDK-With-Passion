/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSExpression, NSString;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject

{
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    _Bool _replaceMissingValueOnly;
}

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSExpression *valueExpression;
@property (retain, nonatomic) NSPropertyTransform *prerequisiteTransform;
@property _Bool replaceMissingValueOnly;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;

@end
