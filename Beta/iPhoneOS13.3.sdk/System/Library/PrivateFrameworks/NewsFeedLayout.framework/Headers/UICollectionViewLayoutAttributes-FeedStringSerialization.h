/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface UICollectionViewLayoutAttributes (FeedStringSerialization)

+ (id)attributesFromProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
+ (id)attributesFromProtobufData:(id)arg1 normalizedWithFeedGutter:(double)arg2;

- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
- (id)serializeToProtobufNormalizedWithFeedGutter:(double)arg1;

@end
