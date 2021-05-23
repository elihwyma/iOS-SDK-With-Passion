/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@protocol AVTStoreBackend <Swift>

@property (weak, nonatomic) id <AVTStoreBackendDelegate> backendDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecordChangeTracker> recordChangeTracker;

- (unsigned short)avatarsForFetchRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAvatar:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAvatars:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAvatarWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)duplicateAvatarRecord:error: /* Error: Ran out of types for this method. */;
- (unsigned short)canCreateAvatarWithError: /* Error: Ran out of types for this method. */;

@end
