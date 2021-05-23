/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKTournamentParticipantRequestInternal, NSArray;

@interface GKTournamentParticipantRequest : NSObject

{
    GKTournamentParticipantRequestInternal *_internal;
}

@property (retain) GKTournamentParticipantRequestInternal *internal;
@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) _Bool friendsOnly;
@property (nonatomic) struct _NSRange range;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;

@end
