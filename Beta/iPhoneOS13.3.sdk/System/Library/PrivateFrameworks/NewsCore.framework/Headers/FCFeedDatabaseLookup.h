/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedDatabaseLookup : NSObject

{
    _Bool _cachedOnly;
    NSString *_feedID;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) _Bool cachedOnly;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature;

@end
