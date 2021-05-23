/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SSURLBag;

__attribute__((visibility("hidden")))
@interface SKUIProductReviewURLProvider : NSObject

{
    NSURL *_rateURL;
    NSURL *_writeReviewURL;
    NSString *_itemID;
    SSURLBag *_urlBag;
}

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) SSURLBag *urlBag;
@property (retain, nonatomic) NSURL *rateURL;
@property (retain, nonatomic) NSURL *writeReviewURL;

- (id)init;
- (id)initWithClientContext:(id)arg1 itemID:(id)arg2;
- (id)_urlByAppendingItemId:(id)arg1;
- (void)fetchURLsWithCompletion:(CDUnknownBlockType)arg1;

@end
