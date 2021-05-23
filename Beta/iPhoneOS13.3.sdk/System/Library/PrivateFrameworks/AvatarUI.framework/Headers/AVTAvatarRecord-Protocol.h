/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@protocol AVTAvatarRecord <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;

@end
