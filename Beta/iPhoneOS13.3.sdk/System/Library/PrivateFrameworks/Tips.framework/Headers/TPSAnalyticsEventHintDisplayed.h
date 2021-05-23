/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString, TPSExperiment;

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    unsigned long long _displayType;
    unsigned long long _displayCount;
    TPSExperiment *_experiment;
}

@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic, readonly) TPSExperiment *experiment;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (void)setDataProvider:(id)arg1;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6;
- (id)duetEvent;

@end
