/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLEntryKey : NSObject

{
    _Bool _isDynamic;
    NSString *_entryKey;
    PLEntryKey *_baseEntryKey;
    NSString *_operatorName;
    Class _operatorClass;
    NSString *_entryType;
    NSString *_entryName;
    NSString *_wildCardName;
    struct _PLTimeIntervalRange _timeIntervalRange;
}

@property (copy, nonatomic) NSString *wildCardName;
@property (nonatomic) _Bool isDynamic;
@property (nonatomic) struct _PLTimeIntervalRange timeIntervalRange;
@property (weak) PLEntryKey *baseEntryKey;
@property (retain, readonly) NSString *entryKey;
@property (retain, readonly) NSString *operatorName;
@property (retain, readonly) Class operatorClass;
@property (retain, readonly) NSString *entryType;
@property (retain, readonly) NSString *entryName;

+ (_Bool)isEntryKeySetup:(id)arg1 forOperatorName:(id)arg2;
+ (id)entryKeysForOperatorName:(id)arg1;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (void)setupEntryObjectsForOperatorClass:(Class)arg1;
+ (id)PLEntryKeyForEntryKey:(id)arg1;
+ (Class)operatorClassForEntryKey:(id)arg1;
+ (id)dynamicEntryKeyForEntryKey:(id)arg1;
+ (id)entryKeysForOperator:(id)arg1;
+ (id)entryKeysForOperatorClass:(Class)arg1;
+ (id)entryKeyStringForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (void)addPLEntryKeyStringToTasking:(id)arg1;
+ (_Bool)shouldConfigureAdditionalTable:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (_Bool)shouldConfigureTable:(id)arg1 withType:(id)arg2 withName:(id)arg3 withConfigs:(id)arg4;
+ (void)addPLEntryKey:(id)arg1;
+ (id)PLEntryAggregateKeysForOperatorName:(id)arg1;
+ (id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(_Bool)arg5;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(_Bool)arg5;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 isDynamic:(_Bool)arg4;
+ (id)PLEntryKeysForEntryType:(id)arg1;
+ (id)PLEntryKeyStringsForTasking;
+ (void)PLEntryKeyStringsForTaskingReset;
+ (id)PLEntryAggregateKeysForOperator:(id)arg1;
+ (id)PLEntryAggregateKeysForOperatorClass:(Class)arg1;
+ (id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4;
+ (id)timeintervalRangeEntryKeyForEntryKey:(id)arg1 withTimeIntervalRange:(struct _PLTimeIntervalRange)arg2;
+ (id)operatorNameForEntryKey:(id)arg1;
+ (id)wildCardForEntryKey:(id)arg1;
+ (id)baseEntryKeyForEntryKey:(id)arg1;
+ (struct _PLTimeIntervalRange)timeIntervalRangeForEntryKey:(id)arg1;

- (id)description;
- (id)debugDescription;
- (id)initWithOperatorName:(id)arg1 withEntryType:(id)arg2 withEntryName:(id)arg3;
- (id)copyWithIsDynamic:(_Bool)arg1;
- (id)copyWithWildCardName:(id)arg1;
- (id)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange)arg1;

@end
