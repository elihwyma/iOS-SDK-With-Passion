//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_durationInOldState:1;
        unsigned int has_sessionRelativeTimestamp:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)stateTransitionType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) BOOL hasDurationInOldState;
@property(nonatomic) double durationInOldState;
- (id)stateTransitionAtIndex:(NSUInteger)arg1;
- (NSUInteger)stateTransitionsCount;
- (void)addStateTransition:(id)arg1;
- (void)clearStateTransitions;
@property(retain, nonatomic) NSMutableArray *stateTransitions;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;

@end

