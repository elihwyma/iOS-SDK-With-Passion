/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKDOMDocument, IKHeadElement, IKJSNavigationDocument, IKJSObject, IKViewElement, IKViewElementStyleFactory, NSDictionary, NSError, NSMapTable, NSMutableDictionary, NSString;

@protocol IKAppDocumentDelegate, IKNetworkRequestLoader;

@interface IKAppDocument : NSObject

{
    NSMutableDictionary *_mediaQueryCache;
    long long _implicitUpdatesStack;
    _Bool _parsingDOM;
    NSMapTable *_viewElementRegistry;
    _Bool _isViewElementRegistryDirty;
    _Bool _updated;
    _Bool _subtreeUpdated;
    _Bool _implicitlyUpdated;
    IKAppContext *_appContext;
    IKDOMDocument *_jsDocument;
    NSString *_identifier;
    IKHeadElement *_headElement;
    IKViewElement *_navigationBarElement;
    IKViewElement *_toolbarElement;
    IKViewElement *_templateElement;
    NSError *_error;
    id <IKAppDocumentDelegate> _delegate;
    double _impressionThreshold;
    double _impressionViewablePercentage;
    NSDictionary *_cachedSnapshotImpressionsMap;
    NSMutableDictionary *_impressions;
    IKJSObject *_owner;
    IKViewElementStyleFactory *_styleFactory;
}

@property (retain) NSString *identifier;
@property (retain) IKViewElement *templateElement;
@property (retain) IKViewElement *navigationBarElement;
@property (retain) IKViewElement *toolbarElement;
@property (retain) IKHeadElement *headElement;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isUpdated) _Bool updated;
@property (getter=isSubtreeUpdated) _Bool subtreeUpdated;
@property (nonatomic) double impressionThreshold;
@property (nonatomic) double impressionViewablePercentage;
@property (retain, nonatomic) NSDictionary *cachedSnapshotImpressionsMap;
@property (retain, nonatomic) NSMutableDictionary *impressions;
@property (weak, nonatomic, readonly) IKDOMDocument *jsDocument;
@property (weak, nonatomic, readonly) IKJSObject *owner;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory;
@property (nonatomic, readonly) id <IKNetworkRequestLoader> requestLoader;
@property (nonatomic, readonly, getter=isImplicitlyUpdated) _Bool implicitlyUpdated;
@property (weak, nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (weak, readonly) IKAppContext *appContext;
@property (weak, nonatomic) id <IKAppDocumentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)scrollToTop;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3 extraInfo:(id)arg4;
- (void)_updateWithXML:(id)arg1;
- (void)dispatchDocumentCallback:(id)arg1 eventType:(unsigned long long)arg2;
- (void)onImpressionsChange:(id)arg1;
- (void)_setViewElementStylesDirtyForced:(_Bool)arg1;
- (id)recordedImpressions:(_Bool)arg1;
- (id)impressionsMatching:(id)arg1 reset:(_Bool)arg2;
- (void)recordedImpressionsMatching:(id)arg1 reset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_viewElementForNodeID:(unsigned long long)arg1;
- (void)setViewElementStylesDirty;
- (void)_resetImplicitUpdates;
- (void)updateForDocument:(id)arg1;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (id)snapshotImpressions;
- (id)recordedImpressions;
- (void)recordedImpressions:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)_isUpdateAllowed;
- (_Bool)evaluateStyleMediaQueryList:(id)arg1;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;
- (void)onLoad;
- (void)onUnload;
- (void)onAppear;
- (void)onDisappear;
- (void)onActive;
- (void)onInactive;
- (void)onNeedsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)onUpdate;
- (void)onPerformanceMetricsChange:(id)arg1;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordImpressionsForViewElements:(id)arg1;
- (void)snapshotImpressionsForViewElements:(id)arg1;
- (id)viewElementForNodeID:(unsigned long long)arg1;
- (void)pushTrackingImplictUpdates;
- (void)popTrackingImplictUpdates;
- (_Bool)markImplicitlyUpdated;

@end
