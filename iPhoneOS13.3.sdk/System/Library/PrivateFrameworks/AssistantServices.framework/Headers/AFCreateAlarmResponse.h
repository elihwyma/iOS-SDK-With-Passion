//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse
{
    NSString *_alarmIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

