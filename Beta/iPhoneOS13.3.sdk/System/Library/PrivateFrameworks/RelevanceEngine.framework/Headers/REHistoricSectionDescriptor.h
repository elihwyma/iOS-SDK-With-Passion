/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOrderedSet, NSSet, NSString, RESectionDescriptor;

@interface REHistoricSectionDescriptor : NSObject

{
    NSOrderedSet *_rules;
    _Bool _invertsRanking;
    long long _maxElementCount;
    RESectionDescriptor *_parentDescriptor;
}

@property (retain, nonatomic) NSArray *orderedRules;
@property (weak, nonatomic) RESectionDescriptor *parentDescriptor;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) _Bool invertsRanking;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSSet *rules;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
