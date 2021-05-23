/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUITransactionOffer : NSObject

{
    NSDictionary *_transactionOfferDict;
    NSArray *_videosPlayables;
    NSDictionary *_offer;
}

@property (nonatomic, readonly) _Bool playWhenDone;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *videosPlayables;
@property (copy, nonatomic, readonly) NSDictionary *offer;

- (id)initWithDictionary:(id)arg1;
- (id)notificationTitle;
- (id)notificationBody;

@end
