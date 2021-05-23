/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSString;

@interface WFWunderlistReminder : MTLModel

{
    long long _reminderId;
    NSDate *_date;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

@property (nonatomic, readonly) long long reminderId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *updatedAt;
@property (nonatomic, readonly) long long revision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;
+ (id)dateJSONTransformer;

@end
