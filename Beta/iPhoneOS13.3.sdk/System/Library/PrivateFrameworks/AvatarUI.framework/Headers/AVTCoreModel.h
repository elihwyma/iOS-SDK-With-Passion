/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTEditingModelColors, NSArray;

@interface AVTCoreModel : NSObject

{
    NSArray *_groups;
    AVTEditingModelColors *_colors;
}

@property (copy, nonatomic, readonly) NSArray *groups;
@property (copy, nonatomic, readonly) AVTEditingModelColors *colors;

- (id)description;
- (id)initWithGroups:(id)arg1 colors:(id)arg2;

@end
