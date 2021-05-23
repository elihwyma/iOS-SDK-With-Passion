/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject

{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_initializationTask;
    GEOProtobufSessionTask *_updateTask;
    CDUnknownBlockType _initErrorHandler;
    CDUnknownBlockType _initFinishedHandler;
    CDUnknownBlockType _updateFinishedHandler;
    CDUnknownBlockType _updateErrorHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *initializationTask;
@property (retain, nonatomic) GEOProtobufSessionTask *updateTask;
@property (copy, nonatomic) CDUnknownBlockType initFinishedHandler;
@property (copy, nonatomic) CDUnknownBlockType initErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType updateFinishedHandler;
@property (copy, nonatomic) CDUnknownBlockType updateErrorHandler;

+ (id)acInitURL;
+ (_Bool)acInitNeedsProxy;
+ (id)acUpdateURL;
+ (_Bool)acUpdateNeedsProxy;

- (id)init;
- (id)cancelError;
- (void)cancelRequest;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startInitRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startUpdateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)didCompleteInitTask;
- (void)didCompleteUpdateTask;

@end
