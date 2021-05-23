/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFWordPressPost : MTLModel

{
    NSNumber *_postId;
    NSURL *_link;
}

@property (copy, nonatomic, readonly) NSNumber *postId;
@property (copy, nonatomic, readonly) NSURL *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)postIdJSONTransformer;
+ (id)linkJSONTransformer;

@end
