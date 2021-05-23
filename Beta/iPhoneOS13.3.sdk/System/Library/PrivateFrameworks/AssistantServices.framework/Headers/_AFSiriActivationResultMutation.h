/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriActivationResult, NSError, NSString;

@interface _AFSiriActivationResultMutation : NSObject

{
    AFSiriActivationResult *_baseModel;
    long long _actionType;
    NSError *_error;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasActionType:1;
        unsigned int hasError:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setError:(id)arg1;
- (void)setActionType:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;

@end
