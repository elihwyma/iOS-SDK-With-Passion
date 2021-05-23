/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFWordPressBlog : MTLModel

{
    _Bool _isAdmin;
    NSURL *_url;
    NSURL *_endpointURL;
    NSNumber *_blogId;
    NSString *_blogName;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSURL *endpointURL;
@property (copy, nonatomic, readonly) NSNumber *blogId;
@property (copy, nonatomic, readonly) NSString *blogName;
@property (nonatomic, readonly) _Bool isAdmin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;
+ (id)endpointURLJSONTransformer;
+ (id)blogIdJSONTransformer;
+ (id)isAdminJSONTransformer;
+ (id)blogWithEndpointURL:(id)arg1;

- (id)initWithEndpointURL:(id)arg1;

@end
