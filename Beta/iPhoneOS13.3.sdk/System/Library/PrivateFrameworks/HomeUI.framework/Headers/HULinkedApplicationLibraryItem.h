/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HULinkedApplicationItem.h>

#import <HomeUI/Swift-Protocol.h>

@class LSApplicationProxy;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <Swift>

{
    LSApplicationProxy *_applicationProxy;
}

@property (nonatomic, readonly) LSApplicationProxy *applicationProxy;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bundleIdentifier;
- (id)initWithApplicationProxy:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
