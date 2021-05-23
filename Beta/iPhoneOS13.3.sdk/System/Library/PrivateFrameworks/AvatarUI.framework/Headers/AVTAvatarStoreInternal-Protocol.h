/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarStoreInternal <Swift>

+ (unsigned short)maximumNumberOfFetchableAvatars;
+ (unsigned short)maximumNumberOfSavableAvatars;

- (unsigned short)saveAvatarRecord:thumbnailAvatar:completionBlock:thumbnailGenerationCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAvatarWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)duplicateAvatar:completionBlock: /* Error: Ran out of types for this method. */;

@end
