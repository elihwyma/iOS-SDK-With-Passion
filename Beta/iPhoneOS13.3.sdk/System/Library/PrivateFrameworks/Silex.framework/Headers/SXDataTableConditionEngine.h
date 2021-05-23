/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXDataTableConditionEngine : NSObject

{
    unsigned long long _conditionCount;
    unsigned long long _validConditionCount;
}

@property (nonatomic) unsigned long long conditionCount;
@property (nonatomic) unsigned long long validConditionCount;

+ (id)engine;

- (id)description;
- (_Bool)isValid;
- (unsigned long long)isEvenInteger:(long long)arg1;
- (unsigned long long)isOddInteger:(long long)arg1;
- (void)addConditionForEvenBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (void)addConditionForOddBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (void)addConditionForEqualInteger:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (void)addConditionForEqualString:(id)arg1 withString:(id)arg2;

@end
