/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataSession, GEODataSessionTask, NSString;

__attribute__((visibility("hidden")))
@interface GEODataSessionWaiter : NSObject

{
    GEODataSession *_session;
    GEODataSessionTask *_task;
    CDUnknownBlockType _handler;
    id _strongReferenceToSelf;
}

@property (retain, nonatomic) GEODataSession *session;
@property (retain, nonatomic) GEODataSessionTask *task;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)initWithSession:(id)arg1 request:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
