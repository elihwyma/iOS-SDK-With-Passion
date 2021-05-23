/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol FCFeedTransforming;

@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject

{
    NSArray *_priorFeedItems;
    id <FCFeedTransforming> _privateLimitTransformation;
}

@property (copy, nonatomic) NSArray *priorFeedItems;
@property (retain, nonatomic) id <FCFeedTransforming> privateLimitTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;

@end
