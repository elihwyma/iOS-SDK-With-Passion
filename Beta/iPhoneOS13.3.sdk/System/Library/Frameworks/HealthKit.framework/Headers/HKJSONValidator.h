/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol NSCopying;

@interface HKJSONValidator : NSObject

{
    NSMutableDictionary *_subschemaCache;
    id <NSCopying> _schema;
}

@property (copy, nonatomic, readonly) id <NSCopying> schema;

+ (id)searchPaths;
+ (void)registerSearchPath:(id)arg1;
+ (_Bool)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id *)arg4;

- (id)init;
- (id)initWithSchema:(id)arg1;
- (_Bool)_validateJSONObject:(id)arg1 keyStack:(id)arg2;
- (id)_mismatchErrorFromKeyStack:(id)arg1;
- (_Bool)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(_Bool)arg4;
- (id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2;
- (_Bool)validateJSONObject:(id)arg1 error:(out id *)arg2;
- (_Bool)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (_Bool)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (_Bool)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (_Bool)_validateBoolean:(id)arg1;
- (_Bool)_validateFingerprintSHA256:(id)arg1;
- (_Bool)_validateTimezone:(id)arg1;
- (_Bool)_validateURL:(id)arg1;
- (_Bool)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3;
- (id)_loadSubschemaNamed:(id)arg1;
- (id)initWithSchema:(id)arg1 subschemaCache:(id)arg2;

@end
