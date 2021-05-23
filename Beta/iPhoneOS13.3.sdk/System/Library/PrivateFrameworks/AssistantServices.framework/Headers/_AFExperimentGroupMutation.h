/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFExperimentGroup, NSDictionary, NSString;

@interface _AFExperimentGroupMutation : NSObject

{
    AFExperimentGroup *_baseModel;
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasAllocation:1;
        unsigned int hasProperties:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setIdentifier:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setAllocation:(unsigned long long)arg1;

@end
