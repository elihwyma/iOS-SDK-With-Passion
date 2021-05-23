/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKChannelDetails;

@interface WLKChannel : NSObject

{
    NSString *_ID;
    WLKChannelDetails *_details;
    NSDictionary *_punchoutUrls;
    NSArray *_seasonNumbers;
    NSArray *_subscriptionOffers;
}

@property (copy, nonatomic, readonly) NSString *ID;
@property (copy, nonatomic, readonly) WLKChannelDetails *details;
@property (copy, nonatomic, readonly) NSDictionary *punchoutUrls;
@property (copy, nonatomic, readonly) NSArray *seasonNumbers;
@property (copy, nonatomic, readonly) NSArray *subscriptionOffers;

+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2;

- (id)init;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end
