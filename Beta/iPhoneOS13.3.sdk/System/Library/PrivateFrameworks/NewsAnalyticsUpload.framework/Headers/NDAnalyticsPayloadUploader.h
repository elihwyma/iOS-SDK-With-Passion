/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

@protocol NDAnalyticsEnvelopeTracker;

@interface NDAnalyticsPayloadUploader : NSObject

{
    FCAnalyticsEndpointConnection *_endpointConnection;
    FCAsyncSerialQueue *_uploadQueue;
    id <NDAnalyticsEnvelopeTracker> _envelopeTracker;
}

@property (retain, nonatomic) FCAnalyticsEndpointConnection *endpointConnection;
@property (retain, nonatomic) FCAsyncSerialQueue *uploadQueue;
@property (retain, nonatomic) id <NDAnalyticsEnvelopeTracker> envelopeTracker;

- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1 envelopeTracker:(id)arg2;
- (void)uploadPayloadsForInfos:(id)arg1 withEnvelopeStore:(id)arg2 perPayloadCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
