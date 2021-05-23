/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CLKGaugeProvider : NSObject

{
    _Bool _paused;
    _Bool _finalized;
    long long _style;
    NSArray *_gaugeColors;
    NSArray *_gaugeColorLocations;
    NSString *_accessibilityLabel;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) NSArray *gaugeColors;
@property (retain, nonatomic) NSArray *gaugeColorLocations;
@property (nonatomic) _Bool paused;
@property (nonatomic) _Bool finalized;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (_Bool)supportsSecureCoding;
+ (id)gaugeProviderWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)validate;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)JSONObjectRepresentation;
- (_Bool)needsTimerUpdates;
- (double)progressFractionForNow:(id)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;

@end
