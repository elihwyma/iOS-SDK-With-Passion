/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSHashTable, NSString, _TVPagePerformanceController;

@interface _TVPagePerformanceTemplateEntry : NSObject

{
    NSHashTable *_initialOnScreenImageProxies;
    _Bool _listeningForImageProxyWillLoad;
    _Bool _listeningForImageProxyDidLoad;
    IKViewElement *_templateElement;
    NSString *_templateElementName;
    unsigned long long _templateUpdateCount;
    unsigned long long _templateWillRender;
    unsigned long long _templateDidRender;
    unsigned long long _templateWillTransition;
    unsigned long long _templateDidTransition;
    unsigned long long _templateWillLoadResources;
    unsigned long long _templateDidLoadResources;
    unsigned long long _templateWillLoadFirstImageProxy;
    unsigned long long _templateDidLoadLastImageProxy;
    _TVPagePerformanceController *_performanceController;
}

@property (weak, nonatomic) IKViewElement *templateElement;
@property (copy, nonatomic) NSString *templateElementName;
@property (nonatomic) unsigned long long templateUpdateCount;
@property (nonatomic) unsigned long long templateWillRender;
@property (nonatomic) unsigned long long templateDidRender;
@property (nonatomic) unsigned long long templateWillTransition;
@property (nonatomic) unsigned long long templateDidTransition;
@property (nonatomic) unsigned long long templateWillLoadResources;
@property (nonatomic) unsigned long long templateDidLoadResources;
@property (nonatomic) unsigned long long templateWillLoadFirstImageProxy;
@property (nonatomic) unsigned long long templateDidLoadLastImageProxy;
@property (nonatomic, readonly) unsigned long long templateRenderDuration;
@property (nonatomic, readonly) unsigned long long templateResourcesDuration;
@property (nonatomic, readonly) unsigned long long templateTransitionDuration;
@property (weak, nonatomic) _TVPagePerformanceController *performanceController;

- (void)dealloc;
- (void)markTemplateWillRender;
- (void)markTemplateDidRender;
- (void)markTemplateWillTransition;
- (void)markTemplateDidTransition;
- (void)_stopListeningForInitialImageProxyLoadNotifications;
- (void)_beginListeningForInitialImageProxyLoadNotifications;
- (void)_maybeStopListeningForInitialImageProxyLoadNotifications;
- (void)_receivedImageProxyWillLoadNotification:(id)arg1;
- (void)_receivedImageProxyDidLoadNotification:(id)arg1;
- (id)initWithPagePerformanceController:(id)arg1 forTemplateElement:(id)arg2;

@end
