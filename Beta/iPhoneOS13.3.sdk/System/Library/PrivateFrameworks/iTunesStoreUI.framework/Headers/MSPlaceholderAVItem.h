/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <MediaPlayer/MPAVItem.h>

@interface MSPlaceholderAVItem : MPAVItem

{
    long long _itemType;
}

- (long long)type;
- (id)initWithAVItemType:(long long)arg1;

@end
