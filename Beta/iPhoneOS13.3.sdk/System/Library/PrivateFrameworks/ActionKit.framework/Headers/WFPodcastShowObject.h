/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface WFPodcastShowObject : MTLModel <Swift>

{
    NSString *_title;
    NSString *_uuid;
    NSString *_storeId;
    NSURL *_feedURL;
    NSArray *_children;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *storeId;
@property (nonatomic, readonly) NSURL *feedURL;
@property (nonatomic, readonly) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;

@end
