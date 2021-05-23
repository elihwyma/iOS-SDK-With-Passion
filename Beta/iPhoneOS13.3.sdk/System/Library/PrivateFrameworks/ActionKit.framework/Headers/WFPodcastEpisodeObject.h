/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, WFTimeInterval;

@interface WFPodcastEpisodeObject : MTLModel <Swift>

{
    NSString *_identifier;
    NSString *_title;
    NSString *_author;
    NSString *_descriptionText;
    NSArray *_genres;
    NSNumber *_episodeNumber;
    NSDate *_releaseDate;
    WFTimeInterval *_duration;
    NSURL *_viewURL;
    NSURL *_feedURL;
    NSString *_artworkURLTemplate;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) NSNumber *episodeNumber;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) WFTimeInterval *duration;
@property (nonatomic, readonly) NSURL *viewURL;
@property (nonatomic, readonly) NSURL *feedURL;
@property (nonatomic, readonly) NSString *artworkURLTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)releaseDateJSONTransformer;
+ (id)descriptionTextJSONTransformer;
+ (id)durationJSONTransformer;

@end
