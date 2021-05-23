/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol AVTAvatarAttributeEditorHeaderPicker;

@protocol AVTAvatarAttributeEditorSection <Swift>

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic, readonly) NSArray *sectionItems;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) id <AVTAvatarAttributeEditorHeaderPicker> headerAccessory;

- (unsigned short)shouldDisplayTitle;
- (unsigned short)shouldDisplaySeparatorBeforeSection: /* Error: Ran out of types for this method. */;

@end
