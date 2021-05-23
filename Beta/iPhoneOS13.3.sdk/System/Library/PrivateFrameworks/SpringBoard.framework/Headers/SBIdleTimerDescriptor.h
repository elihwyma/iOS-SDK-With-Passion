/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <Swift>

{
    long long _timerMode;
    double _sampleInterval;
    double _warnInterval;
    double _totalInterval;
    double _quickUnwarnInterval;
}

@property (nonatomic) long long timerMode;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double warnInterval;
@property (nonatomic) double quickUnwarnInterval;
@property (nonatomic) double totalInterval;
@property (nonatomic, readonly) _Bool shouldWarn;
@property (nonatomic, readonly) _Bool shouldExpireAfterWarn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3;

@end
