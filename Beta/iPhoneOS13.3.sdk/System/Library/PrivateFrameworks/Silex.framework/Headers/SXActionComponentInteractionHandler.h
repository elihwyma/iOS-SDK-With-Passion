/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAction, SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXActionComponentInteractionHandler : NSObject

{
    id <SXAction> _action;
    id <SXActionManager> _actionManager;
    id <SXActionSerializer> _actionSerializer;
    id <SXAnalyticsReportingProvider> _analyticsReportingProvider;
}

@property (nonatomic, readonly) id <SXAction> action;
@property (nonatomic, readonly) id <SXActionManager> actionManager;
@property (nonatomic, readonly) id <SXActionSerializer> actionSerializer;
@property (nonatomic, readonly) id <SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)previewViewController;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)commitViewController:(id)arg1;
- (id)initWithAction:(id)arg1 actionManager:(id)arg2 actionSerializer:(id)arg3 analyticsReportingProvider:(id)arg4;

@end
