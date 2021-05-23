/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;

@interface MKAppImageManager : NSObject <Swift>

{
    NSCache *_iconCache;
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedImageManager;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearImageCache;
- (void)cancelLoadAppImageAtURL:(id)arg1;

@end
