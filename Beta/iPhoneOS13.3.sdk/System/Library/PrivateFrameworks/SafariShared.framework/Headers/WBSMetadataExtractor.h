/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class JSContext, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@interface WBSMetadataExtractor : NSObject

{
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
    WKWebProcessPlugInFrame *_webProcessPlugInFrame;
}

@property (nonatomic, readonly) WKWebProcessPlugInFrame *webProcessPlugInFrame;
@property (nonatomic, readonly) JSContext *context;

+ (id)metadataExtractorScriptSource;

- (void)dealloc;
- (id)appleTouchIconURLs;
- (id)faviconURLs;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(_Bool)arg2;
- (id)makeContext;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
- (id)_colorFromColorComponents:(id)arg1;
- (void)getTemplateIconURL:(id *)arg1 andColor:(id *)arg2;
- (id)firstElementForSelector:(id)arg1;

@end
