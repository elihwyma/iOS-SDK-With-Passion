/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSMutableArray;

@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol

{
    struct _MSDSPCContext _context;
    NSMutableArray *_collectionsInFlight;
}

@property (nonatomic) id <MSDeleteStreamsProtocolDelegate> delegate;

- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_resetConnectionVariables;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)sendDeletionRequestForAssetCollections:(id)arg1;

@end
