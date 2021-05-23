/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSString, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIBadgeTextAttachmentLoader : NSObject

{
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithResourceLoader:(id)arg1;
- (void)connectStringView:(id)arg1;
- (void)disconnectStringView:(id)arg1;
- (_Bool)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3;

@end
