/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedRequest : NSObject <Swift>

{
    _Bool _cachedOnly;
    NSString *_feedID;
    long long _feedBin;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) long long feedBin;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) _Bool cachedOnly;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
