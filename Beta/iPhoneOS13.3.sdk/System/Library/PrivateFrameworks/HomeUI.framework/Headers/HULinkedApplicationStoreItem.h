/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HULinkedApplicationItem.h>

#import <HomeUI/Swift-Protocol.h>

@class SSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <Swift>

{
    SSLookupItem *_storeItem;
}

@property (nonatomic, readonly) SSLookupItem *storeItem;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bundleIdentifier;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithStoreItem:(id)arg1;
- (id)_loadStoreIconWithArtwork:(id)arg1;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2;

@end
