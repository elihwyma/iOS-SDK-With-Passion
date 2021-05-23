/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface WFTrelloObject : MTLModel <Swift>

{
    NSString *_name;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;

@end
