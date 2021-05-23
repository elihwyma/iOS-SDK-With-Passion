/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <SystemStatus/STVoiceControlStatusDomainData.h>

@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData

@property (nonatomic, getter=isVoiceControlActive) _Bool voiceControlActive;
@property (nonatomic) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)applyDiff:(id)arg1;

@end
