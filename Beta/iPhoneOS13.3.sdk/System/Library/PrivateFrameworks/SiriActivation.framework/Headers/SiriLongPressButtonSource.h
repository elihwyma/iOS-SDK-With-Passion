/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriActivationSource.h>

@class NSMutableArray, NSString, SiriContext, SiriLongPressButtonContext;

@interface SiriLongPressButtonSource : SiriActivationSource

{
    double _longPressInterval;
    long long _buttonIdentifier;
    NSMutableArray *_lock_activityAssertions;
    SiriLongPressButtonContext *_context;
}

@property (retain, nonatomic) SiriContext *context;
@property (nonatomic) double longPressInterval;
@property (nonatomic) long long buttonIdentifier;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)arg1;

- (id)init;
- (void)configureConnection;
- (void)overrideConnectedToTrustedCarPlay:(_Bool)arg1;
- (void)overrideConnectedToCarPlay:(_Bool)arg1;
- (id)_initWithButtonIdentifier:(long long)arg1;
- (id)prepareForActivation;
- (id)speechInteractionActivityWithTimestamp:(double)arg1;
- (void)didRecognizeButtonSinglePressUp;
- (void)didRecognizeLongPress;

@end
