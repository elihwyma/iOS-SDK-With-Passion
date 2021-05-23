/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLRelationship.h>

__attribute__((visibility("hidden")))
@interface NSSQLToMany : NSSQLRelationship

- (_Bool)isToMany;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)inverseToOne;

@end
