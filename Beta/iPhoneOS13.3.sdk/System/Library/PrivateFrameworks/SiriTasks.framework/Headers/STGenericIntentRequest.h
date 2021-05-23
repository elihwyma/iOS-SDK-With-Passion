/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSDictionary, NSString;

@interface STGenericIntentRequest : AFSiriRequest

{
    NSString *_appIdentifier;
    NSString *_intentString;
    NSString *_utterance;
    NSDictionary *_info;
    _Bool __launchToForeground;
}

@property (nonatomic, setter=_setLaunchToForeground:) _Bool _launchToForeground;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)info;
- (id)appIdentifier;
- (id)utterance;
- (id)_af_analyticsContextDescription;
- (_Bool)_makeAppFrontmost;
- (id)responseWithCode:(long long)arg1;
- (_Bool)isForegroundLaunch;
- (id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4;
- (id)intentString;

@end
