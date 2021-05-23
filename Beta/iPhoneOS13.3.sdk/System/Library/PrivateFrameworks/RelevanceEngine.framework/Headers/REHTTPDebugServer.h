/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, REHTMLPageBuilder, REHTTPFileCache, REHTTPServer;

@protocol REHTTPDebugServerDataSource;

@interface REHTTPDebugServer : NSObject

{
    REHTTPServer *_server;
    REHTMLPageBuilder *_pageBuilder;
    REHTTPFileCache *_cache;
    struct {
        unsigned int implementsProvideAvailableEngines:1;
        unsigned int implementsHandleFileRequest:1;
    } _dataSourceCallbacks;
    id <REHTTPDebugServerDataSource> _dataSource;
    NSArray *_availableEngines;
    NSString *_processName;
}

@property (retain) NSArray *availableEngines;
@property (retain) NSString *processName;
@property (nonatomic, readonly) unsigned short port;
@property (weak, nonatomic, readonly) id <REHTTPDebugServerDataSource> dataSource;

- (id)_pageTitle;
- (id)_pageMap;
- (id)_landingPage;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (void)_loadAvailableEngines:(id)arg1;
- (id)_create404Element;
- (SEL)_serverMethod:(id)arg1;
- (_Bool)_isReservedFilePath:(id)arg1;
- (void)_loadPageForReservedPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFileRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_aboutPage;
- (id)_enginesPage;
- (void)_loadEngineListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_engineList;
- (id)_landPageFileName;
- (id)_radarLinkWithTitle:(id)arg1;
- (void)_availableEngineInstancesForProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)httpServer:(id)arg1 handleRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPort:(unsigned short)arg1 dataSource:(id)arg2;

@end
