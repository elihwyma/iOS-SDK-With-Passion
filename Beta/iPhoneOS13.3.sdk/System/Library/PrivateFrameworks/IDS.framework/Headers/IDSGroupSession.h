/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString, _IDSGroupSession;

@interface IDSGroupSession : NSObject

{
    _IDSGroupSession *_internal;
}

@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) unsigned int sessionEndedReason;

- (void)dealloc;
- (void)invalidate;
- (id)_internal;
- (unsigned int)state;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setPreferences:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)_internal_sessionWithValidityCheck;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)joinWithOptions:(id)arg1;
- (void)leaveGroupSession;
- (void)requestActiveParticipants;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3;

@end
