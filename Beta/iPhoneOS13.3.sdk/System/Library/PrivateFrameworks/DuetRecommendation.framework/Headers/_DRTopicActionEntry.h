/*
 Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _DRTopicActionEntry : NSObject

{
    NSString *_topic;
    NSDate *_when;
    unsigned long long _action;
}

@property (retain, readonly) NSString *topic;
@property (retain, readonly) NSDate *when;
@property (readonly) unsigned long long action;

- (id)description;
- (id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3;

@end
