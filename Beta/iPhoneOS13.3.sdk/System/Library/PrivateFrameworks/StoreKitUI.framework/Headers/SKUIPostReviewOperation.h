/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation

{
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

@property (readonly) NSDictionary *responseDictionary;

- (void)run;
- (id)_httpBody;
- (id)initWithReviewMetadata:(id)arg1;

@end
