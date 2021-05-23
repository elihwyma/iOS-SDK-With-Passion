/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol AVTAvatarAttributeEditorHeaderPicker <Swift>

@property (copy, nonatomic, readonly) NSArray *choices;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool alwaysPresentAlert;

@end
