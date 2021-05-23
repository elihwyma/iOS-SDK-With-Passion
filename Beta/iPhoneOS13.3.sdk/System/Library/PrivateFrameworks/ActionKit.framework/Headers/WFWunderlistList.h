/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSString;

@interface WFWunderlistList : MTLModel

{
    long long _listId;
    NSString *_title;
    NSDate *_createdAt;
    long long _revision;
}

@property (nonatomic, readonly) long long listId;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) long long revision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;

@end
