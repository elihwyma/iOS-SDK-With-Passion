/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIColor;

@interface CLKProgressProvider : NSObject

{
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_timerToken;
    _Bool _finalized;
    _Bool _paused;
    UIColor *_tintColor;
    double _backgroundRingAlpha;
}

@property (retain, nonatomic) UIColor *tintColor;
@property double backgroundRingAlpha;
@property (nonatomic) _Bool paused;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update;
- (void)_validate;
- (void)_commonInit;
- (void)validate;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)JSONObjectRepresentation;
- (double)progressFractionForNow:(id)arg1;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (long long)timeTravelUpdateFrequency;
- (void)_maybeStartOrStopUpdates;
- (double)_progressFractionForNow:(id)arg1;
- (_Bool)_needsUpdates;

@end
