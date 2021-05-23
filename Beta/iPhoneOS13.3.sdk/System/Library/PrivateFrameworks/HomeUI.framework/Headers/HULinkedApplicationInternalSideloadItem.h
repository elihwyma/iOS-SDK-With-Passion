/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HULinkedApplicationItem.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@interface HULinkedApplicationInternalSideloadItem : HULinkedApplicationItem <Swift>

{
    NSString *_bundleIdentifier;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
