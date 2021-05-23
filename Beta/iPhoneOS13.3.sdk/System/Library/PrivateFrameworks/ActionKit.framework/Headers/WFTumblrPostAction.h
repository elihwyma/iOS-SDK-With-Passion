/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString, TMAPIClient, WFAppInstalledResource;

@interface WFTumblrPostAction : WFAction

{
    TMAPIClient *_client;
    WFAppInstalledResource *_appInstalledResource;
}

@property (nonatomic, readonly) TMAPIClient *client;
@property (retain, nonatomic) WFAppInstalledResource *appInstalledResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)inputContentClasses;
- (_Bool)inputsMultipleItems;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)openFiles:(id)arg1;
- (void)openPostWithType:(id)arg1 withParameters:(id)arg2;
- (void)updateTagsParameterHidden;

@end
