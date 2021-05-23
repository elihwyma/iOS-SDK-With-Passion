/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class NSMapTable, NSString, NSURLSession;

@interface MKMapItemMetadataRequester : NSObject <Swift>

{
    NSURLSession *_session;
    NSMapTable *_requestsForURLs;
    NSMapTable *_tasksForURLs;
    NSMapTable *_dataForTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)sendRequest:(id)arg1;
- (void)cancelRequestsForMapItem:(id)arg1;
- (void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3;

@end
