/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXAnchorModelPBAnchorMetadata, NSMutableArray, NSString;

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable

{
    ATXAnchorModelPBAnchorMetadata *_anchor;
    NSMutableArray *_negativeActions;
    NSMutableArray *_negativeAppLaunches;
    NSMutableArray *_positiveActions;
    NSMutableArray *_positiveAppLaunches;
    NSString *_userId;
}

@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic, readonly) _Bool hasAnchor;
@property (retain, nonatomic) ATXAnchorModelPBAnchorMetadata *anchor;
@property (retain, nonatomic) NSMutableArray *positiveAppLaunches;
@property (retain, nonatomic) NSMutableArray *positiveActions;
@property (retain, nonatomic) NSMutableArray *negativeAppLaunches;
@property (retain, nonatomic) NSMutableArray *negativeActions;

+ (Class)positiveAppLaunchesType;
+ (Class)positiveActionsType;
+ (Class)negativeAppLaunchesType;
+ (Class)negativeActionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPositiveAppLaunches;
- (void)addPositiveAppLaunches:(id)arg1;
- (unsigned long long)positiveAppLaunchesCount;
- (id)positiveAppLaunchesAtIndex:(unsigned long long)arg1;
- (void)clearPositiveActions;
- (void)addPositiveActions:(id)arg1;
- (unsigned long long)positiveActionsCount;
- (id)positiveActionsAtIndex:(unsigned long long)arg1;
- (void)clearNegativeAppLaunches;
- (void)addNegativeAppLaunches:(id)arg1;
- (unsigned long long)negativeAppLaunchesCount;
- (id)negativeAppLaunchesAtIndex:(unsigned long long)arg1;
- (void)clearNegativeActions;
- (void)addNegativeActions:(id)arg1;
- (unsigned long long)negativeActionsCount;
- (id)negativeActionsAtIndex:(unsigned long long)arg1;

@end
