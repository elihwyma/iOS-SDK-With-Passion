/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface FCFeedItemsWithIDLookupResult : NSObject

{
    NSDictionary *_sectionIDsByFeedID;
    NSArray *_feedItems;
}

@property (retain, nonatomic) NSDictionary *sectionIDsByFeedID;
@property (retain, nonatomic) NSArray *feedItems;

- (id)init;
- (id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2;

@end
