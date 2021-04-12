//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, NSHashTable, NSString, _TVPagePerformanceController;

@interface _TVPagePerformanceTemplateEntry : NSObject
{
    NSHashTable *_initialOnScreenImageProxies;
    BOOL _listeningForImageProxyWillLoad;
    BOOL _listeningForImageProxyDidLoad;
    IKViewElement *_templateElement;
    NSString *_templateElementName;
    NSUInteger _templateUpdateCount;
    NSUInteger _templateWillRender;
    NSUInteger _templateDidRender;
    NSUInteger _templateWillTransition;
    NSUInteger _templateDidTransition;
    NSUInteger _templateWillLoadResources;
    NSUInteger _templateDidLoadResources;
    NSUInteger _templateWillLoadFirstImageProxy;
    NSUInteger _templateDidLoadLastImageProxy;
    _TVPagePerformanceController *_performanceController;
}

@property(nonatomic) __weak _TVPagePerformanceController *performanceController; // @synthesize performanceController=_performanceController;
@property(nonatomic) NSUInteger templateDidLoadLastImageProxy; // @synthesize templateDidLoadLastImageProxy=_templateDidLoadLastImageProxy;
@property(nonatomic) NSUInteger templateWillLoadFirstImageProxy; // @synthesize templateWillLoadFirstImageProxy=_templateWillLoadFirstImageProxy;
@property(nonatomic) NSUInteger templateDidLoadResources; // @synthesize templateDidLoadResources=_templateDidLoadResources;
@property(nonatomic) NSUInteger templateWillLoadResources; // @synthesize templateWillLoadResources=_templateWillLoadResources;
@property(nonatomic) NSUInteger templateDidTransition; // @synthesize templateDidTransition=_templateDidTransition;
@property(nonatomic) NSUInteger templateWillTransition; // @synthesize templateWillTransition=_templateWillTransition;
@property(nonatomic) NSUInteger templateDidRender; // @synthesize templateDidRender=_templateDidRender;
@property(nonatomic) NSUInteger templateWillRender; // @synthesize templateWillRender=_templateWillRender;
@property(nonatomic) NSUInteger templateUpdateCount; // @synthesize templateUpdateCount=_templateUpdateCount;
@property(copy, nonatomic) NSString *templateElementName; // @synthesize templateElementName=_templateElementName;
@property(nonatomic) __weak IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
// - (void).cxx_destruct;
- (void)_receivedImageProxyDidLoadNotification:(id)arg1;
- (void)_receivedImageProxyWillLoadNotification:(id)arg1;
- (void)_maybeStopListeningForInitialImageProxyLoadNotifications;
- (void)_stopListeningForInitialImageProxyLoadNotifications;
- (void)_beginListeningForInitialImageProxyLoadNotifications;
@property(readonly, nonatomic) NSUInteger templateTransitionDuration;
@property(readonly, nonatomic) NSUInteger templateResourcesDuration;
@property(readonly, nonatomic) NSUInteger templateRenderDuration;
- (void)markTemplateDidTransition;
- (void)markTemplateWillTransition;
- (void)markTemplateDidRender;
- (void)markTemplateWillRender;
- (void)dealloc;
- (id)initWithPagePerformanceController:(id)arg1 forTemplateElement:(id)arg2;

@end

