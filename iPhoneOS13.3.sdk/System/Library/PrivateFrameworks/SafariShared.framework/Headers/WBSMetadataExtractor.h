//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@interface WBSMetadataExtractor : NSObject
{
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
    WKWebProcessPlugInFrame *_webProcessPlugInFrame;
}

+ (id)metadataExtractorScriptSource;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame; // @synthesize webProcessPlugInFrame=_webProcessPlugInFrame;
// - (void).cxx_destruct;
- (id)firstElementForSelector:(id)arg1;
- (void)getTemplateIconURL:(id )arg1 andColor:(id )arg2;
- (id)_colorFromColorComponents:(id)arg1;
- (id)faviconURLs;
- (id)appleTouchIconURLs;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
@property(readonly, nonatomic) JSContext *context;
- (id)makeContext;
- (void)dealloc;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(BOOL)arg2;
- (id)initWithWebProcessPlugInFrame:(id)arg1;

@end

