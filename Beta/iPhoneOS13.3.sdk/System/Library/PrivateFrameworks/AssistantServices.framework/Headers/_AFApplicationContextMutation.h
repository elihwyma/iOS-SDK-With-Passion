/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFApplicationContext, AFBulletin, AceObject, NSDictionary, NSString;

@interface _AFApplicationContextMutation : NSObject

{
    AFApplicationContext *_baseModel;
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAssociatedBundleIdentifier:1;
        unsigned int hasBulletin:1;
        unsigned int hasAceContext:1;
        unsigned int hasContextDictionary:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setBulletin:(id)arg1;
- (void)setAssociatedBundleIdentifier:(id)arg1;
- (void)setAceContext:(id)arg1;
- (void)setContextDictionary:(id)arg1;

@end
