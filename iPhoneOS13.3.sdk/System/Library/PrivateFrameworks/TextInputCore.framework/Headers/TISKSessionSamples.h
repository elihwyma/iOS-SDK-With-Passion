//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSMutableDictionary, NSString, TIKeyboardLayout;

@interface TISKSessionSamples : NSObject <NSSecureCoding>
{
    double _currentTypingStart;
    BOOL _isEmpty;
    NSMutableDictionary *_keyedSamples;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_identifier;
    NSString *_version;
    TIKeyboardLayout *_layout;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) TIKeyboardLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *keyedSamples; // @synthesize keyedSamples=_keyedSamples;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)generateDataForSR;
- (id)_roundedSessionInterval;
- (id)_roundUpToNearestHalfHour:(id)arg1;
- (id)description:(BOOL)arg1;
- (id)positionalMetric:(id)arg1;
- (id)singleMetric:(id)arg1;
- (id)samples:(id)arg1 withPosition:(NSUInteger)arg2;
- (id)samples:(id)arg1;
- (id)counter:(id)arg1;
- (void)addSample:(id)arg1 forKey:(id)arg2;
- (void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(NSUInteger)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)merge:(id)arg1;
- (void)setup;
- (BOOL)isTypingTimerHalted;
- (void)haltTypingTimer;
- (void)haltTypingTimerAt:(double)arg1;
- (void)startTypingTimerAt:(double)arg1;
- (id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 layout:(id)arg5;
- (id)init:(id)arg1 endDate:(id)arg2;

@end

