/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesCollectionObject.h>

@class NSDictionary, NSString, NSURL;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject

{
    NSString *_podcastUUID;
    NSURL *_feedURL;
}

@property (copy, nonatomic) NSString *podcastUUID;
@property (retain, nonatomic) NSURL *feedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5;

@end
