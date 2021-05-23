/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBFeedItem.h>

@class NSString;

@interface FCDraftFeedItem : NTPBFeedItem

{
    NSString *articleID;
    NSString *feedID;
}

@property (retain, nonatomic) NSString *articleID;

- (id)feedID;
- (void)setFeedID:(id)arg1;

@end
