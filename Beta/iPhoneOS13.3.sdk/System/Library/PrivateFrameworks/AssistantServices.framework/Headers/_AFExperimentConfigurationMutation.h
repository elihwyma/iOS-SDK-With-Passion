/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFExperimentConfiguration, AFExperimentGroup, NSArray, NSString;

@interface _AFExperimentConfigurationMutation : NSObject

{
    AFExperimentConfiguration *_baseModel;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasType:1;
        unsigned int hasIdentifier:1;
        unsigned int hasVersion:1;
        unsigned int hasControlGroup:1;
        unsigned int hasExperimentGroups:1;
        unsigned int hasSalt:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (void)setControlGroup:(id)arg1;
- (void)setExperimentGroups:(id)arg1;
- (void)setSalt:(id)arg1;
- (id)generate;

@end
