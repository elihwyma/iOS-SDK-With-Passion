/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface HKStateMachineState : NSObject

{
    long long _index;
    NSString *_label;
    NSDictionary *_incomingTransitions;
    NSDictionary *_outgoingTransitions;
}

@property (copy, nonatomic) NSDictionary *incomingTransitions;
@property (copy, nonatomic) NSDictionary *outgoingTransitions;
@property (nonatomic, readonly) long long index;
@property (copy, nonatomic, readonly) NSString *label;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIndex:(long long)arg1 label:(id)arg2;

@end
