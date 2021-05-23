/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXActionComponentInteractionHandlerFactory : NSObject

{
    id <SXActionManager> _actionManager;
    id <SXActionSerializer> _actionSerializer;
    id <SXAnalyticsReportingProvider> _analyticsReportingProvider;
}

@property (nonatomic, readonly) id <SXActionManager> actionManager;
@property (nonatomic, readonly) id <SXActionSerializer> actionSerializer;
@property (nonatomic, readonly) id <SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)interactionHandlerForAction:(id)arg1;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;

@end
