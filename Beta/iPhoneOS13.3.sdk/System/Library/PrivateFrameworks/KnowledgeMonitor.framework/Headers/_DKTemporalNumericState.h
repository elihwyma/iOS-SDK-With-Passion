/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@interface _DKTemporalNumericState : NSObject

{
    NSNumber *_state;
    NSDate *_timestamp;
}

@property (retain) NSNumber *state;
@property (retain) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 timestamp:(id)arg2;

@end
