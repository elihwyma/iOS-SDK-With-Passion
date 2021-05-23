/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface MSPPosition : NSObject

{
    NSArray *_pathComponents;
}

@property (nonatomic, readonly) NSData *serializedRepresentation;
@property (readonly, getter=_pathComponents) NSArray *pathComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)initialSignpostWithClientIdentifier:(id)arg1;
+ (id)finalSignpostWithClientIdentifier:(id)arg1;
+ (id)positionBetweenSignpost:(id)arg1 andSignpost:(id)arg2 clientIdentifier:(id)arg3;
+ (id)initialPositionWithClientIdentifier:(id)arg1;
+ (id)finalPositionWithClientIdentifier:(id)arg1;
+ (_Bool)_randBoolForStrategy:(unsigned long long)arg1;
+ (_Bool)_hasSpaceForInsertionAtDepth:(unsigned long long)arg1 betweenEarlierPosition:(id)arg2 andLaterPosition:(id)arg3 clientIdentifier:(id)arg4;
+ (long long)_strategyForAllocationAtDepth:(unsigned long long)arg1;
+ (id)_pathComponentsForSignpost:(id)arg1;
+ (id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 clientIdentifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (_Bool)_isFinal;
- (id)_initWithPathComponents:(id)arg1;
- (id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)arg1 clientIdentifier:(id)arg2;
- (id)_addingDistanceAtEqualDepth:(long long)arg1 clientIdentifier:(id)arg2;
- (_Bool)_isInitial;
- (id)_initWithIndexes:(id)arg1 originIdentifier:(id)arg2;

@end
