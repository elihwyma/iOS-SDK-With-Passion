/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTStickerBackendDelegate;

@protocol AVTStickerBackend <Swift>

@property (weak, nonatomic) id <AVTStickerBackendDelegate> stickerBackendDelegate;

- (unsigned short)recentStickersForFetchRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didUseStickerWithAvatarIdentifier:stickerIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteRecentStickersWithAvatarIdentifier:stickerIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteRecentStickersForChangeTracker:completionHandler: /* Error: Ran out of types for this method. */;

@end
