/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface AFClockTimerSnapshot : NSObject <Swift>

{
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDictionary *timersByID;
@property (copy, nonatomic, readonly) NSOrderedSet *notifiedFiringTimerIDs;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 timersByID:(id)arg3 notifiedFiringTimerIDs:(id)arg4;

@end
