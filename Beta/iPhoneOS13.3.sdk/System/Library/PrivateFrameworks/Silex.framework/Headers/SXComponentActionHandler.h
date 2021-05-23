/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXComponentActionHandler : SXAnalyticsEvent

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

- (void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 invocationType:(unsigned long long)arg4;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;

@end
