/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributeDescription, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLLocationAttributeRTreeExtension : NSObject

{
    NSObject *_userInfoObject;
    NSArray *_components;
    NSSQLEntity *_sqlEntity;
    NSString *_attributeName;
    NSString *_rtreeTableName;
    NSAttributeDescription *_attributeDescription;
    NSAttributeDescription *_latProp;
    NSAttributeDescription *_longProp;
    NSArray *_insertSQLStrings;
    NSArray *_dropSQLStrings;
    NSArray *_bulkUpdateSQLStrings;
}

@property (nonatomic, readonly) NSObject *userInfoObject;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSAttributeDescription *attributeDescription;
@property (nonatomic, readonly) NSSQLEntity *sqlEntity;
@property (nonatomic, readonly) NSString *rtreeTableName;
@property (nonatomic, readonly) NSAttributeDescription *latProp;
@property (nonatomic, readonly) NSAttributeDescription *longProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;

+ (id)newRTReeTableNameForAttribute:(id)arg1 onEntity:(id)arg2;

- (void)dealloc;
- (_Bool)validate:(id *)arg1;
- (void)generateSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (_Bool)isEqualToExtension:(id)arg1;
- (_Bool)validatePropertyWithDescription:(id)arg1 andName:(id)arg2 forUseAs:(id)arg3 onAttributeNamed:(id)arg4 onEntityNamed:(id)arg5 error:(id *)arg6;

@end
