/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <JavaScriptCore/JSContext.h>

@interface OKJavaScriptContext : JSContext

- (id)init;
- (void)dealloc;
- (void)setupExceptionHandler;
- (void)setupConsole;
- (void)setupNativeStructs;
- (void)setupNativeObjects;
- (void)setupConvenienceMethods;
- (void)setupOpus;
- (void)setupControllers;
- (void)setupWidgets;
- (void)setupContentFilters;
- (void)setupActions;
- (void)setupTransitions;
- (id)valueFromJSValue:(id)arg1;

@end
