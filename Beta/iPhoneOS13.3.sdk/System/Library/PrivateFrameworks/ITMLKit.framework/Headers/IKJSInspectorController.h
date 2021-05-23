/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKDOMDocument, IKJSInspectorCSSAgent, IKJSInspectorDOMAgent, IKJSInspectorNetworkAgent, IKJSInspectorPageAgent, IKJSInspectorStorageAgent, NSDate, NSString, RWIProtocolInspector;

@protocol IKJSInspectorControllerDelegate, IKNetworkRequestLoader;

@interface IKJSInspectorController : NSObject

{
    struct {
        _Bool respondsToInspectElementModeChanged;
        _Bool respondsToHighlightViewForElementWithOneID;
        _Bool respondsToHighlightViewForElementWithManyIDs;
        _Bool respondsToCancelHighlightView;
    } _delegateFlags;
    struct {
        _Bool respondsToActiveDocument;
    } _appFlags;
    IKAppContext *_appContext;
    id <IKJSInspectorControllerDelegate> _delegate;
    RWIProtocolInspector *_inspector;
    NSDate *_inspectorConnectDate;
    id <IKNetworkRequestLoader> _requestLoader;
    IKDOMDocument *_activeDocument;
    IKJSInspectorDOMAgent *_domAgent;
    IKJSInspectorNetworkAgent *_networkAgent;
    IKJSInspectorPageAgent *_pageAgent;
    IKJSInspectorCSSAgent *_cssAgent;
    IKJSInspectorStorageAgent *_storageAgent;
    id _inspectorConnectedToken;
    id _inspectorDisconnectedToken;
}

@property (weak, nonatomic) IKDOMDocument *activeDocument;
@property (weak, nonatomic, readonly) IKJSInspectorDOMAgent *domAgent;
@property (weak, nonatomic, readonly) IKJSInspectorNetworkAgent *networkAgent;
@property (weak, nonatomic, readonly) IKJSInspectorPageAgent *pageAgent;
@property (weak, nonatomic, readonly) IKJSInspectorCSSAgent *cssAgent;
@property (weak, nonatomic, readonly) IKJSInspectorStorageAgent *storageAgent;
@property (nonatomic, readonly) id inspectorConnectedToken;
@property (nonatomic, readonly) id inspectorDisconnectedToken;
@property (weak, readonly) IKAppContext *appContext;
@property (weak, nonatomic) id <IKJSInspectorControllerDelegate> delegate;
@property (nonatomic, readonly) RWIProtocolInspector *inspector;
@property (nonatomic, readonly) NSDate *inspectorConnectDate;
@property (nonatomic, readonly) id <IKNetworkRequestLoader> requestLoader;
@property (nonatomic, readonly, getter=isInspectElementModeEnabled) _Bool inspectElementModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (void)appDocumentDidLoad:(id)arg1;
- (void)appDocumentDidUnload:(id)arg1;
- (void)appDocumentDidAppear:(id)arg1;
- (void)appDocumentDidDisappear:(id)arg1;
- (void)appDocumentDidUpdate:(id)arg1;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (void)inspectNodeWithID:(long long)arg1;
- (void)inspectElementModeChanged:(_Bool)arg1;
- (_Bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)cancelHighlightView;
- (void)updateStylesheets;
- (void)evaluateMediaQuery:(CDUnknownBlockType)arg1;
- (void)resetStylesFromNode:(id)arg1;
- (void)_updateCurrentActiveDocument;
- (id)nodeById:(long long)arg1;
- (id)nodesByIds:(id)arg1;
- (id)styleFromComposer:(id)arg1;
- (void)didAddEventListenerForDOMNode:(id)arg1;
- (void)willRemoveEventListenerForDOMNode:(id)arg1;

@end
