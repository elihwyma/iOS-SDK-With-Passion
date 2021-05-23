/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, TIKeyboardLayout;

@interface TISKSessionSamples : NSObject

{
    double _currentTypingStart;
    _Bool _isEmpty;
    NSMutableDictionary *_keyedSamples;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_identifier;
    NSString *_version;
    TIKeyboardLayout *_layout;
}

@property (retain, nonatomic) NSMutableDictionary *keyedSamples;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) TIKeyboardLayout *layout;
@property (nonatomic) _Bool isEmpty;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)setup;
- (id)description:(_Bool)arg1;
- (id)init:(id)arg1 endDate:(id)arg2;
- (id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 layout:(id)arg5;
- (void)startTypingTimerAt:(double)arg1;
- (void)haltTypingTimerAt:(double)arg1;
- (void)haltTypingTimer;
- (_Bool)isTypingTimerHalted;
- (void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(unsigned long long)arg3;
- (void)addSample:(id)arg1 forKey:(id)arg2;
- (id)counter:(id)arg1;
- (id)samples:(id)arg1;
- (id)samples:(id)arg1 withPosition:(unsigned long long)arg2;
- (id)singleMetric:(id)arg1;
- (id)positionalMetric:(id)arg1;
- (id)_roundUpToNearestHalfHour:(id)arg1;
- (id)_roundedSessionInterval;
- (id)generateDataForSR;

@end
