/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait

{
    unsigned long long _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (id)debugDescription;
- (_Bool)isActive;
- (id)niceDescription;
- (id)initWithPartOfDay:(unsigned long long)arg1;

@end
