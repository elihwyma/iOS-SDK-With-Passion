/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDiscreteFeedback.h>

__attribute__((visibility("hidden")))
@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback

{
    unsigned int _systemSoundID;
    unsigned long long _eventType;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned int systemSoundID;

+ (id)type;
+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)_effectiveSystemSoundID;
- (unsigned long long)_effectiveEventType;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
