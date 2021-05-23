/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface WFUlyssesSheet : MTLModel <Swift>

{
    NSString *_identifier;
    NSString *_title;
    NSString *_text;
    NSArray *_keywords;
    NSArray *_notes;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSArray *notes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;

@end
