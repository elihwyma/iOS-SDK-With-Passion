/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;

@protocol IKJSDOMDocumentAppBridge, IKNetworkRequestLoader;

@interface IKDOMDocument <Swift>

{
    struct {
        _Bool hasSetNeedsUpdate;
        _Bool hasSnapshotImpressions;
        _Bool hasRecordedImpressions;
        _Bool hasRecordedImpressionsCallback;
        _Bool hasRecordedImpressionsMatchingCallback;
        _Bool hasImpressionsMatchingTag;
        _Bool hasScrollToTop;
        _Bool hasRunTest;
    } _appBridgeFlags;
    _Bool _embeddedScriptExecuted;
    id <IKNetworkRequestLoader> __requestLoader;
    id <IKJSDOMDocumentAppBridge> _appBridge;
    unsigned long long _itmlIDSequence;
    NSString *__documentURI;
}

@property (nonatomic, getter=isEmbeddedScriptExecuted) _Bool embeddedScriptExecuted;
@property (nonatomic) unsigned long long itmlIDSequence;
@property (nonatomic, readonly) id <IKNetworkRequestLoader> _requestLoader;
@property (retain, nonatomic, setter=_setDocumentURI:) NSString *_documentURI;
@property (weak, nonatomic) id <IKJSDOMDocumentAppBridge> appBridge;
@property (weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) IKDOMImplementation *implementation;
@property (retain, nonatomic, readonly) IKDOMElement *documentElement;
@property (retain, nonatomic, readonly) NSString *inputEncoding;
@property (retain, nonatomic, readonly) NSString *xmlEncoding;
@property (nonatomic) _Bool xmlStandalone;
@property (retain, nonatomic) NSString *xmlVersion;
@property (nonatomic) _Bool strictErrorChecking;
@property (retain, nonatomic) NSString *documentURI;

+ (struct _xmlDoc *)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id *)arg3;
+ (void)_resetUpdatesForNode:(id)arg1;

- (void)dealloc;
- (long long)nodeType;
- (id)createElement:(id)arg1;
- (id)createDocumentFragment;
- (void)setNeedsUpdate;
- (void)replace:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)createTextNode:(id)arg1;
- (void)scrollToTop;
- (id)nodeName;
- (id)createComment:(id)arg1;
- (id)createCDATASection:(id)arg1;
- (id)adoptNode:(id)arg1;
- (id)getElementById:(id)arg1;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(long long)arg4:(id)arg5;
- (id)initWithAppContext:(id)arg1;
- (void)prepareForPresentationWithExtraInfo:(id)arg1;
- (id)recordedImpressions:(id)arg1;
- (id)snapshotImpressions;
- (void)runTest:(id)arg1:(id)arg2;
- (id)matchingImpressions:(id)arg1:(id)arg2;
- (void)recordedImpressions:(id)arg1:(id)arg2;
- (void)recordedImpressionsMatching:(id)arg1:(id)arg2:(id)arg3;
- (void)_executeEmbeddedScriptWithExtraInfo:(id)arg1;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode *)arg1;
- (void)setITMLIDForNode:(id)arg1;
- (id)asPrivateIKJSDOMDocument;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id *)arg3;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id *)arg3;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (_Bool)markUpdated;
- (void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2;

@end
