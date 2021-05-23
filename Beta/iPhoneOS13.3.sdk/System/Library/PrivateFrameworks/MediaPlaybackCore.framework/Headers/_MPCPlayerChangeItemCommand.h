/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand

{
    unsigned long long _changeItemSupport;
}

@property (nonatomic, readonly) unsigned long long changeItemSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)previousItem;
- (id)nextItem;
- (id)previousItemDeferringToPlaybackQueuePosition;
- (id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2;
- (id)previousSection;
- (id)previousChapter;
- (id)nextSection;
- (id)nextChapter;
- (id)changeToSection:(id)arg1;
- (id)changeToItem:(id)arg1;

@end
