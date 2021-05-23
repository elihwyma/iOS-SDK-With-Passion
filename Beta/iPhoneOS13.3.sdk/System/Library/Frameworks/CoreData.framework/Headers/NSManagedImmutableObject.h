/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityDescription, NSManagedObjectID;

@interface NSManagedImmutableObject : NSObject

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSManagedObjectID *objectID;

+ (id)retain;
+ (void)release;
+ (id)_retain_1;
+ (void)_release_1;
+ (id)allocWithEntity:(id)arg1;
+ (_Bool)_isGeneratedClass;
+ (Class)classForEntity:(id)arg1;
+ (_Bool)_isGeneratedClass_1;
+ (CDStruct_977f6bcf *)_PFMOClassFactoryData;

- (_Bool)respondsToSelector:(SEL)arg1;
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)implementsSelector:(SEL)arg1;

@end
