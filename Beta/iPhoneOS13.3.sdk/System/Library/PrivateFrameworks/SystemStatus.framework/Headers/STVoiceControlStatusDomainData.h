/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class NSString;

@interface STVoiceControlStatusDomainData : NSObject <Swift>

{
    _Bool _voiceControlActive;
    unsigned long long _listeningState;
}

@property (nonatomic, readonly, getter=isVoiceControlActive) _Bool voiceControlActive;
@property (nonatomic, readonly) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)initWithVoiceControlActive:(_Bool)arg1 listeningState:(unsigned long long)arg2;

@end
