/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject

{
    BCSBusinessItem *_lastFetchedBusinessItem;
    BCSBusinessItem *_bizItemForLastFetchedIcon;
    NSData *_lastFetchedBusinessItemIconData;
}

@property (retain, nonatomic) BCSBusinessItem *bizItemForLastFetchedIcon;
@property (retain, nonatomic) NSData *lastFetchedBusinessItemIconData;
@property (retain, nonatomic) BCSBusinessItem *lastFetchedBusinessItem;

+ (id)sharedCache;

- (void)deleteCache;
- (id)lastFetchedBusinessItemIconDataForBizItem:(id)arg1;
- (void)setLastFetchedBusinesIconData:(id)arg1 withMatchingBusinessItem:(id)arg2;

@end
