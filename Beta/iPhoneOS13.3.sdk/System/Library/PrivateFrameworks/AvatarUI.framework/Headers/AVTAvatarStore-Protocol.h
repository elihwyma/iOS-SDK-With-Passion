/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarStore <Swift>

- (unsigned short)canCreateAvatar;
- (unsigned short)avatarsForFetchRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAvatarsForFetchRequest:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canCreateAvatarWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAvatar:completionHandler: /* Error: Ran out of types for this method. */;

@end
