/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface AFClockAlarmSnapshot : NSObject <Swift>

{
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDictionary *alarmsByID;
@property (copy, nonatomic, readonly) NSOrderedSet *notifiedFiringAlarmIDs;

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
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 alarmsByID:(id)arg3 notifiedFiringAlarmIDs:(id)arg4;

@end
