/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDSQLitePredicate, NSDictionary, NSPredicate, NSSet, _HKFilter;

@interface HDSampleQueryDescription : NSObject <Swift>

{
    NSSet *_sampleTypes;
    NSPredicate *_predicate;
    NSDictionary *_encodingOptions;
    NSSet *_restrictedSourceEntities;
    CDUnknownBlockType _authorizationFilter;
    _HKFilter *_filter;
    HDSQLitePredicate *_sqlitePredicate;
}

@property (copy, nonatomic, readonly) NSSet *sampleTypes;
@property (copy, nonatomic, readonly) NSPredicate *predicate;
@property (copy, nonatomic, readonly) NSDictionary *encodingOptions;
@property (copy, nonatomic, readonly) NSSet *restrictedSourceEntities;
@property (copy, nonatomic, readonly) CDUnknownBlockType authorizationFilter;
@property (copy, nonatomic, readonly) _HKFilter *filter;
@property (copy, nonatomic, readonly) HDSQLitePredicate *sqlitePredicate;

+ (id)sampleQueryDescriptionWithSampleType:(id)arg1;
+ (id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)sampleQueryDescriptionWithSampleTypes:(id)arg1 predicate:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 encodingOptions:(id)arg3 restrictedSourceEntities:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 filter:(id)arg6 sqlitePredicate:(id)arg7;

@end
