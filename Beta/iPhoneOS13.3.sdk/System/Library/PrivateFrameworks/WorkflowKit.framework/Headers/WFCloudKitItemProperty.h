/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSValue;

@interface WFCloudKitItemProperty : NSObject

{
    _Bool _ignoredByDefault;
    unsigned long long _type;
    NSString *_name;
    Class _itemClass;
    NSValue *_nilValue;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly, getter=isIgnoredByDefault) _Bool ignoredByDefault;
@property (nonatomic, readonly) NSValue *nilValue;

+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2;
+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ignoredByDefault:(_Bool)arg3;
+ (id)objectPropertyWithName:(id)arg1;
+ (id)objectPropertyWithName:(id)arg1 ignoredByDefault:(_Bool)arg2;
+ (id)assetPropertyWithName:(id)arg1;
+ (id)assetPropertyWithName:(id)arg1 ignoredByDefault:(_Bool)arg2;
+ (id)itemReferencePropertyWithName:(id)arg1 itemClass:(Class)arg2;
+ (id)itemPropertyWithName:(id)arg1 itemClass:(Class)arg2;

- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 itemClass:(Class)arg3 ignoredByDefault:(_Bool)arg4 nilValue:(id)arg5;

@end
