/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

{
    ICScheme *_scheme;
}

@property (nonatomic, readonly) ICScheme *scheme;

+ (_Bool)refreshesAvailabilityOnApplicationResume;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
