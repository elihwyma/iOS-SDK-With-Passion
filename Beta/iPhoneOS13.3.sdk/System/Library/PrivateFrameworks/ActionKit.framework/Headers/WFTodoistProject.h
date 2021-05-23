/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDictionary, NSString, WFColor;

@interface WFTodoistProject : MTLModel

{
    _Bool _collapsed;
    long long _projectId;
    NSString *_name;
    WFColor *_color;
    long long _indent;
    long long _order;
}

@property (nonatomic, readonly) long long projectId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) WFColor *color;
@property (nonatomic, readonly) long long indent;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) _Bool collapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;
+ (id)collapsedJSONTransformer;

@end
