/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPersonalizationFeature.h>

@class NSArray, NSString;

@interface FCPublisherTopicFeature : FCPersonalizationFeature

{
    NSString *_publisherTagID;
    NSString *_topicTagID;
}

@property (retain, nonatomic) NSString *publisherTagID;
@property (retain, nonatomic) NSString *topicTagID;
@property (nonatomic, readonly) NSArray *features;

- (id)init;
- (id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)fr_description;

@end
