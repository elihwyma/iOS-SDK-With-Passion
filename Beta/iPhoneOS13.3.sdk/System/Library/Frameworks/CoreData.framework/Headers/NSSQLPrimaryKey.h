/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLColumn.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLPrimaryKey : NSSQLColumn

{
    NSString *_name;
}

- (void)dealloc;
- (id)name;
- (void)_setName:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)sqlTypeString;

@end
