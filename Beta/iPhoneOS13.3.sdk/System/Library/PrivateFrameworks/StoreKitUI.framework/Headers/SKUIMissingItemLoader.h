/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SKUIResourceLoader;

@protocol SKUIMissingItemDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMissingItemLoader : NSObject

{
    long long _batchSize;
    id <SKUIMissingItemDelegate> _delegate;
    NSString *_imageProfile;
    NSString *_keyProfile;
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property (nonatomic) long long batchSize;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (weak, nonatomic) id <SKUIMissingItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3;
- (id)initWithResourceLoader:(id)arg1;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)_requestItems:(id)arg1 withReason:(long long)arg2;

@end
