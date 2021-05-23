/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSQLAttribute, NSSQLEntity, NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLKeypathTriggerAttributeExtension : NSObject

{
    id _objectFromUserInfo;
    NSString *_keypath;
    NSArray *_insertSQLStrings;
    NSArray *_dropSQLStrings;
    NSArray *_bulkUpdateSQLStrings;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_countedRelationship;
}

@property (nonatomic, readonly) id objectFromUserInfo;
@property (nonatomic, readonly) NSString *keypath;
@property (nonatomic, readonly) NSSQLEntity *entity;
@property (nonatomic, readonly) NSSQLAttribute *attribute;
@property (nonatomic, readonly) NSSQLRelationship *countedRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;

- (void)dealloc;
- (_Bool)validate:(id *)arg1;
- (void)generateSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (_Bool)isEqualToExtension:(id)arg1;
- (_Bool)validateExpression:(id)arg1 error:(id *)arg2;
- (_Bool)validateAttribute:(id *)arg1;
- (_Bool)validateKeypath:(id *)arg1;

@end
