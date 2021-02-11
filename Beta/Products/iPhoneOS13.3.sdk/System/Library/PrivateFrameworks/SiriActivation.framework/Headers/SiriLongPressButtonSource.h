/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource> {
    long long  _buttonIdentifier;
    SiriLongPressButtonContext * _context;
    NSMutableArray * _lock_activityAssertions;
    double  _longPressInterval;
}

@property (nonatomic) long long buttonIdentifier;
@property (nonatomic, retain) SiriContext *context;
@property (nonatomic, retain) SiriLongPressButtonContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *lock_activityAssertions;
@property (nonatomic) double longPressInterval;
@property (readonly) Class superclass;

+ (id)longPressButtonForIdentifier:(long long)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)_initWithButtonIdentifier:(long long)arg1;
- (long long)buttonIdentifier;
- (void)configureConnection;
- (id)context;
- (void)didRecognizeButtonSinglePressUp;
- (void)didRecognizeLongPress;
- (id)init;
- (id)lock_activityAssertions;
- (double)longPressInterval;
- (void)overrideConnectedToCarPlay:(bool)arg1;
- (void)overrideConnectedToTrustedCarPlay:(bool)arg1;
- (id)prepareForActivation;
- (void)setButtonIdentifier:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setLock_activityAssertions:(id)arg1;
- (void)setLongPressInterval:(double)arg1;
- (id)speechInteractionActivityWithTimestamp:(double)arg1;

@end