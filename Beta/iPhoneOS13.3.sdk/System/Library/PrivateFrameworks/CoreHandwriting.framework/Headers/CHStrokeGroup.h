/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@protocol CHStrokeIdentifier;

@interface CHStrokeGroup : NSObject

{
    long long _uniqueIdentifier;
    long long _ancestorIdentifier;
    NSSet *_strokeIdentifiers;
    id <CHStrokeIdentifier> _firstStrokeIdentifier;
    id <CHStrokeIdentifier> _lastStrokeIdentifier;
    long long _classification;
    double _groupingConfidence;
    NSString *_strategyIdentifier;
    struct CGPoint _firstStrokeOrigin;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) long long uniqueIdentifier;
@property (nonatomic, readonly) long long ancestorIdentifier;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) struct CGPoint firstStrokeOrigin;
@property (nonatomic, readonly) struct CGVector averageWritingOrientation;
@property (nonatomic, readonly) NSSet *strokeIdentifiers;
@property (nonatomic, readonly) id <CHStrokeIdentifier> firstStrokeIdentifier;
@property (nonatomic, readonly) id <CHStrokeIdentifier> lastStrokeIdentifier;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) double groupingConfidence;
@property (nonatomic, readonly) NSString *strategyIdentifier;

+ (long long)_newStrokeGroupUniqueIdentifier;
+ (_Bool)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 firstStrokeOrigin:(struct CGPoint)arg8;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 classification:(long long)arg5 groupingConfidence:(double)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(struct CGPoint)arg8;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint)arg9;
- (_Bool)isEquivalentToStrokeGroup:(id)arg1;

@end
