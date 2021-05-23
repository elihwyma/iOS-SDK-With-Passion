/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@protocol AVTAvatarAttributeEditorSectionItemPrefetching <Swift>

@property (copy, nonatomic, readonly) NSString *prefetchingIdentifier;
@property (copy, nonatomic, readonly) CDUnknownBlockType thumbnailProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType presetResourcesProvider;

@end
