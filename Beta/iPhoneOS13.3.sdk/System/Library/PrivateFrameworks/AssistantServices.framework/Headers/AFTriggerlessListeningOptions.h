/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@interface AFTriggerlessListeningOptions : NSObject <Swift>

{
    _Bool _showUIDuringListening;
    _Bool _playAlertBeforeListening;
    double _endpointDelay;
}

@property (nonatomic) _Bool showUIDuringListening;
@property (nonatomic) _Bool playAlertBeforeListening;
@property (nonatomic, readonly) _Bool showUIBeforeListening;
@property (nonatomic, readonly) _Bool beepBeforeListening;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double endpointDelay;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithShowUIDuringListening:(_Bool)arg1 playAlertBeforeListening:(_Bool)arg2;

@end
