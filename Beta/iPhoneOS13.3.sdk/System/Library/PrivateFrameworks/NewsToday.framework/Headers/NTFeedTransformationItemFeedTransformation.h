/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCFeedTransforming;

@interface NTFeedTransformationItemFeedTransformation : NSObject

{
    id <FCFeedTransforming> _feedItemTransformation;
}

@property (retain, nonatomic) id <FCFeedTransforming> feedItemTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFeedItemTransformation:(id)arg1;

@end
