/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary;

@interface _LSLazyPropertyList : NSObject

@property (readonly) NSDictionary *propertyList;

+ (_Bool)supportsSecureCoding;
+ (id)lazyPropertyListWithContext:(struct LSContext *)arg1 unit:(unsigned int)arg2;
+ (id)lazyPropertyListWithPropertyListData:(id)arg1;
+ (id)lazyPropertyList;
+ (id)lazyPropertyListWithPropertyListURL:(id)arg1;
+ (id)lazyPropertyListWithLazyPropertyLists:(id)arg1;
+ (id)lazyPropertyListWithPropertyList:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2;
- (_Bool)_getPropertyList:(id *)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (id)_filterValueFromPropertyList:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForPropertyListKeys:(id)arg1;
- (id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;

@end
