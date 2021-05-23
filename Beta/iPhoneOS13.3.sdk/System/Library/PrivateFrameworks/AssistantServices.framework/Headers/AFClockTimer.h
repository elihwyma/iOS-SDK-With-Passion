/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockTimer : NSObject <Swift>

{
    _Bool _isFiring;
    NSUUID *_timerID;
    NSURL *_timerURL;
    NSString *_title;
    long long _state;
    double _duration;
    long long _type;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *itemID;
@property (nonatomic, readonly) NSURL *itemURL;
@property (nonatomic, readonly) _Bool isFiring;
@property (copy, nonatomic, readonly) NSDate *firedDate;
@property (copy, nonatomic, readonly) NSDate *dismissedDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;
@property (copy, nonatomic, readonly) NSUUID *timerID;
@property (copy, nonatomic, readonly) NSURL *timerURL;
@property (nonatomic, readonly) _Bool isFiring;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double fireTimeInterval;
@property (copy, nonatomic, readonly) NSDate *fireDate;
@property (copy, nonatomic, readonly) NSDate *firedDate;
@property (copy, nonatomic, readonly) NSDate *dismissedDate;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(_Bool)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 type:(long long)arg7 fireTimeInterval:(double)arg8 fireDate:(id)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12;

@end
