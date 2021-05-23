/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSObject;

@interface WFTriggerEvent : NSObject

{
    NSString *_triggerID;
    id <NSObject> _currentValue;
}

@property (copy, nonatomic, readonly) NSString *triggerID;
@property (nonatomic, readonly) id <NSObject> currentValue;

- (id)description;
- (id)initWithTriggerID:(id)arg1 currentValue:(id)arg2;

@end
