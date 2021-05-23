/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSNumber, NSString;

@interface WFWordPressTerm : MTLModel

{
    NSNumber *_termId;
    NSString *_name;
    NSString *_taxonomy;
}

@property (copy, nonatomic, readonly) NSNumber *termId;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *taxonomy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)termIdJSONTransformer;

@end
