/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSOperation.h>

@class MSVArtworkServiceRequest, NSError, NSString;

@interface MSVArtworkServiceOperation : NSOperation

{
    NSError *_operationError;
    NSString *_debugMessage;
    MSVArtworkServiceRequest *_request;
}

@property (nonatomic, readonly) MSVArtworkServiceRequest *request;
@property (nonatomic, readonly) NSError *operationError;
@property (copy, nonatomic, readonly) NSString *debugMessage;

- (void)setOperationError:(id)arg1;
- (void)setDebugMessage:(id)arg1;
- (id)initWithArtworkRequest:(id)arg1;

@end
