/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVURLDataConsumer.h>

__attribute__((visibility("hidden")))
@interface SKUIWishlistDataConsumer : SSVURLDataConsumer

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)_itemsWithJSONData:(id)arg1 error:(id *)arg2;
- (id)_errorWithData:(id)arg1 MIMEType:(id)arg2;

@end
