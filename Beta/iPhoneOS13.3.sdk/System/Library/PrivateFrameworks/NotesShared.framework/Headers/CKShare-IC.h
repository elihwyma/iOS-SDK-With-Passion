/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CloudKit/CKShare.h>

@interface CKShare (IC)

@property (nonatomic, readonly) unsigned long long ic_nonOwnerInvitedParticipantsCount;
@property (nonatomic, readonly) unsigned long long ic_nonOwnerAcceptedParticipantsCount;

- (unsigned long long)_nonOwnerParticipantsCountWithAcceptanceStatus:(long long)arg1;

@end
