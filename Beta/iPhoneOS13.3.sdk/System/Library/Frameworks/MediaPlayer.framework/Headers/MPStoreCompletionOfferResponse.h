/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferResponse : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemsByVariant;
    NSDictionary *_responseDictionary;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;

- (id)initWithResponseDictionary:(id)arg1;
- (id)mediaItemsWithStoreOfferVariant:(long long)arg1;

@end
