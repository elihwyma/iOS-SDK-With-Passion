/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEORPProblemProvider : NSObject

{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_submissionTask;
    GEOProtobufSessionTask *_statusTask;
    CDUnknownBlockType _submissionErrorHandler;
    CDUnknownBlockType _submissionFinishedHandler;
    CDUnknownBlockType _statusErrorHandler;
    CDUnknownBlockType _statusFinishedHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *submissionTask;
@property (retain, nonatomic) GEOProtobufSessionTask *statusTask;
@property (copy, nonatomic) CDUnknownBlockType submissionErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType submissionFinishedHandler;
@property (copy, nonatomic) CDUnknownBlockType statusErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType statusFinishedHandler;

- (id)init;
- (id)cancelError;
- (void)cancelRequest;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)didCompleteSubmissionTask;
- (void)didCompleteStatusTask;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end
