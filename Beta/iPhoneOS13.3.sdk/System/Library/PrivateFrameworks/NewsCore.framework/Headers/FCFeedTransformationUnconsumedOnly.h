/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCFeedTransforming;

@interface FCFeedTransformationUnconsumedOnly : NSObject <Swift>

{
    id <FCFeedTransforming> _innerFilter;
}

@property (retain, nonatomic) id <FCFeedTransforming> innerFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(CDUnknownBlockType)arg5 dateOfArticleIDConsumptionProvider:(CDUnknownBlockType)arg6 maxVersionConsumedProvider:(CDUnknownBlockType)arg7 dateOfMaxVersionConsumptionProvider:(CDUnknownBlockType)arg8;

@end
