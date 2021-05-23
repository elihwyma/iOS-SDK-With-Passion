/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFAccessibilityState, NSString;

@interface _AFAccessibilityStateMutation : NSObject

{
    AFAccessibilityState *_baseModel;
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsVoiceOverTouchEnabled:1;
        unsigned int hasIsVibrationDisabled:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setIsVoiceOverTouchEnabled:(long long)arg1;
- (void)setIsVibrationDisabled:(long long)arg1;

@end
