/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface _UIDynamicAnimationActiveValue : NSObject

{
    double _value;
    double _minimumActiveValue;
    double _maximumActiveValue;
    int _type;
    double _boundaryPull;
    id _applier;
    unsigned int _lowerBoundary:1;
    unsigned int _upperBoundary:1;
}

@property (nonatomic) double value;
@property (nonatomic) double minimumActiveValue;
@property (nonatomic) double maximumActiveValue;
@property (nonatomic) int type;

+ (id)activeValue:(double)arg1 ofType:(int)arg2;
+ (id)lowerBoundary:(double)arg1 ofType:(int)arg2;
+ (id)upperBoundary:(double)arg1 ofType:(int)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_setBoundaryPull:(double)arg1;
- (_Bool)_isLowerBoundary;
- (_Bool)_isUpperBoundary;
- (CDUnknownBlockType)_applier;
- (double)_boundaryPull;

@end
