/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFWorkoutType : NSObject

{
    unsigned long long _activityType;
    NSString *_name;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (copy, nonatomic, readonly) NSString *name;

+ (id)allTypes;

- (id)initWithActivityType:(unsigned long long)arg1;

@end
