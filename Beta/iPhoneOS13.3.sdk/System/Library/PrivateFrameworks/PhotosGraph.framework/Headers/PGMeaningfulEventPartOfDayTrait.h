/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait

{
    unsigned long long _value;
    unsigned long long _forbiddenValue;
}

@property (nonatomic, readonly) unsigned long long value;
@property (nonatomic, readonly) unsigned long long forbiddenValue;

- (_Bool)isActive;
- (id)initWithPartOfDay:(unsigned long long)arg1;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2;

@end
