/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WAKView, WebDataSource;

@protocol WebPluginManualLoader;

__attribute__((visibility("hidden")))
@interface WebHTMLRepresentationPrivate : NSObject

{
    WebDataSource *dataSource;
    _Bool hasSentResponseToPlugin;
    _Bool includedInWebKitStatistics;
    id <WebPluginManualLoader> manualLoader;
    WAKView *pluginView;
}

@end
