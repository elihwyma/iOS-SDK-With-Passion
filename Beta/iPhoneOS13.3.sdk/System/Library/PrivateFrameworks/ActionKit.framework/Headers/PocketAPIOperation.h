/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperation.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, PocketAPI;

@protocol PocketAPIDelegate;

@interface PocketAPIOperation : NSOperation <Swift>

{
    PocketAPI *API;
    id <PocketAPIDelegate> delegate;
    int domain;
    int HTTPMethod;
    NSString *APIMethod;
    NSDictionary *arguments;
    NSURLConnection *connection;
    NSHTTPURLResponse *response;
    NSMutableData *data;
    NSError *error;
    NSString *baseURLPath;
    _Bool finishedLoading;
    _Bool attemptedRelogin;
}

@property (retain, nonatomic) PocketAPI *API;
@property (retain, nonatomic) id <PocketAPIDelegate> delegate;
@property (retain, nonatomic, readonly) NSString *baseURLPath;
@property (nonatomic) int domain;
@property (nonatomic) int HTTPMethod;
@property (retain, nonatomic) NSString *APIMethod;
@property (retain, nonatomic) NSDictionary *arguments;
@property (retain, nonatomic, readonly) NSURLConnection *connection;
@property (retain, nonatomic, readonly) NSHTTPURLResponse *response;
@property (retain, nonatomic, readonly) NSMutableData *data;
@property (retain, nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)encodeForURL:(id)arg1;
+ (id)decodeForURL:(id)arg1;
+ (id)errorFromXError:(id)arg1 withErrorCode:(unsigned long long)arg2 HTTPStatusCode:(unsigned long long)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)responseDictionary;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)connectionFinishedWithError:(id)arg1;
- (id)pkt_requestArguments;
- (id)pkt_URLRequest;
- (void)pkt_connectionFinishedLoading;

@end
