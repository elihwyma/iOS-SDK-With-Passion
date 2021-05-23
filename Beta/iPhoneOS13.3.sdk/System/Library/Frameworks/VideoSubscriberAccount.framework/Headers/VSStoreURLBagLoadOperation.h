/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, NSString, VSStoreURLBag;

@interface VSStoreURLBagLoadOperation : VSAsyncOperation

{
    VSStoreURLBag *_bag;
    NSString *_bagKey;
    id _value;
    NSError *_error;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSStoreURLBag *bag;
@property (copy, nonatomic) NSString *bagKey;

- (void)executionDidBegin;

@end
