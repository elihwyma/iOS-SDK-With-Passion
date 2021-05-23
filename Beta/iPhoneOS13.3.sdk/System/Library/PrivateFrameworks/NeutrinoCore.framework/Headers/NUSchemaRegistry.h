/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NUSchemaRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct NSMutableDictionary *_schemas;
    struct NSMutableDictionary *_versions;
}

+ (id)sharedRegistry;

- (id)init;
- (void)_registerBuiltInSchemas;
- (_Bool)registerSchema:(id)arg1 error:(out id *)arg2;
- (_Bool)_registerSchema:(id)arg1 error:(out id *)arg2;
- (_Bool)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id *)arg3;
- (_Bool)registerSchemas:(id)arg1 error:(out id *)arg2;
- (id)schemaWithIdentifier:(id)arg1;
- (id)_schemaWithIdentifier:(id)arg1;
- (id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2;
- (id)_latestVersionWithOriginalIdentifier:(id)arg1;
- (id)versionsCompatibleWithIdentifier:(id)arg1;
- (id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2;

@end
