/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SXComponentInsertionConditionEngine : NSObject

{
    NSMutableSet *_conditions;
}

@property (nonatomic, readonly) NSMutableSet *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addCondition:(id)arg1;
- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint)arg2;

@end
