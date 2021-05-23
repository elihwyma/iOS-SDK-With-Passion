/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesStoreObject.h>

@class NSDictionary, NSString, NSURL, WFTimeInterval;

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject

{
    _Bool _streamable;
    _Bool _explicit;
    NSURL *_previewURL;
    NSString *_genre;
    WFTimeInterval *_duration;
}

@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) WFTimeInterval *duration;
@property (nonatomic, readonly) _Bool streamable;
@property (nonatomic, readonly) _Bool explicit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)durationJSONTransformer;
+ (id)explicitJSONTransformer;
+ (id)priceJSONTransformer;

@end
