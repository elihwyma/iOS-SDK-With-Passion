/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet, NSString;

@interface SXTraitDistanceComponentInsertionCondition : NSObject

{
    unsigned long long _componentTrait;
    unsigned long long _otherComponentTrait;
    NSMutableIndexSet *_traitAreas;
    NSMutableIndexSet *_otherTraitAreas;
    struct _SXConvertibleValue _distance;
}

@property (nonatomic, readonly) unsigned long long componentTrait;
@property (nonatomic, readonly) unsigned long long otherComponentTrait;
@property (nonatomic, readonly) struct _SXConvertibleValue distance;
@property (retain, nonatomic) NSMutableIndexSet *traitAreas;
@property (retain, nonatomic) NSMutableIndexSet *otherTraitAreas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint)arg2;
- (id)initWithTrait:(unsigned long long)arg1 otherTrait:(unsigned long long)arg2 distance:(struct _SXConvertibleValue)arg3;
- (void)inspectTraitAreasForComponents:(id)arg1 layoutProvider:(id)arg2;

@end
