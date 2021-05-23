/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOrderedSet, NSSet, NSString, REHistoricSectionDescriptor;

@interface RESectionDescriptor : NSObject

{
    NSOrderedSet *_rules;
    NSString *_name;
    REHistoricSectionDescriptor *_historicSectionDescriptor;
    long long _maxElementCount;
}

@property (retain, nonatomic) NSArray *orderedRules;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REHistoricSectionDescriptor *historicSectionDescriptor;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSSet *rules;

+ (id)defaultSectionDescriptorForIdentifier:(id)arg1;
+ (id)defaultUpNextSectionDescriptorForIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
