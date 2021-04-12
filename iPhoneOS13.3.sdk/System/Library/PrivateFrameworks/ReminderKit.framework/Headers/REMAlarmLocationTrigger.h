//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>


@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>
{
    REMStructuredLocation *_structuredLocation;
    long long _proximity;
}

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) REMStructuredLocation *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isTemporal;
- (BOOL)isContentEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)_deepCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2;
- (id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3;

@end

