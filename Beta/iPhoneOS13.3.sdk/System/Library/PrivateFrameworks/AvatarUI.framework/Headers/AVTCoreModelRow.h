/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreModelRowOptions, NSOrderedSet, NSString;

@interface AVTCoreModelRow : NSObject

{
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelRowOptions *_options;
    NSOrderedSet *_representedTags;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) AVTCoreModelRowOptions *options;
@property (copy, nonatomic, readonly) NSOrderedSet *representedTags;

- (id)description;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 identifier:(id)arg4;

@end
