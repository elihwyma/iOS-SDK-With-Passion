/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarRecord;

@protocol AVTCarouselController <Swift>

@property (nonatomic, readonly) id <AVTAvatarRecord> focusedRecord;
@property (nonatomic) double decelerationRate;
@property (nonatomic) _Bool singleAvatarMode;
@property (nonatomic) _Bool allowsCreate;

- (unsigned short)reloadData;
- (unsigned short)setAllowsCreate:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)setSingleAvatarMode:fillContainer:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)presentEditorForCreatingAvatar: /* Error: Ran out of types for this method. */;
- (unsigned short)displayAvatarRecordWithIdentifier:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)presentActionsForAvatar: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotProviderFocusedOnRecordWithIdentifier:size: /* Error: Ran out of types for this method. */;

@end
