/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFExperimentContext, NSDictionary, NSString;

@interface _AFExperimentContextMutation : NSObject

{
    AFExperimentContext *_baseModel;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasExperimentsByConfigurationIdentifier:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setExperimentsByConfigurationIdentifier:(id)arg1;

@end
