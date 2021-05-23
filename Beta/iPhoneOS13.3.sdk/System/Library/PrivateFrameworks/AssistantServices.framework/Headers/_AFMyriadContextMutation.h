/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFMyriadContext, AFMyriadPerceptualAudioHash, NSString;

@interface _AFMyriadContextMutation : NSObject

{
    AFMyriadContext *_baseModel;
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasPerceptualAudioHash:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setPerceptualAudioHash:(id)arg1;

@end
