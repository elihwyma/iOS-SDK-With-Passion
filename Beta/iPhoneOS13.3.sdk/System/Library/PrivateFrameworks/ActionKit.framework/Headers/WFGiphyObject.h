/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFGiphyObject : MTLModel <Swift>

{
    NSString *_objectId;
    NSString *_type;
    NSString *_caption;
    NSURL *_url;
    NSDictionary *_images;
}

@property (copy, nonatomic, readonly) NSString *objectId;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *caption;
@property (copy, nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSDictionary *images;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)urlJSONTransformer;
+ (id)imagesJSONTransformer;
+ (id)captionJSONTransformer;

- (id)originalImage;
- (id)wfSerializedRepresentation;
- (id)smallestImage;

@end
