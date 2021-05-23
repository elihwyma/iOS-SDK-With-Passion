/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject

{
    id <CoreDAVAccountInfoProvider> _provider;
    NSArray *_headerSortDescriptors;
    int _snippetsLogged;
}

@property (retain, nonatomic) NSArray *headerSortDescriptors;

- (id)initWithProvider:(id)arg1;
- (void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(_Bool)arg3;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3;
- (id)_inflateRequestBody:(id)arg1;
- (void)logCoreDAVResponseSnippet:(id)arg1;

@end
