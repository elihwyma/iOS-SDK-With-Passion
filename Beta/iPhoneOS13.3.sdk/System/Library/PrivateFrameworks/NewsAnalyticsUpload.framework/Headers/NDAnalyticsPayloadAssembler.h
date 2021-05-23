/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@protocol NDAnalyticsPayloadAssemblerConfigProvider;

@interface NDAnalyticsPayloadAssembler : NSObject

{
    id <NDAnalyticsPayloadAssemblerConfigProvider> _configProvider;
    unsigned long long _maxPayloadSize;
}

@property (retain, nonatomic) id <NDAnalyticsPayloadAssemblerConfigProvider> configProvider;
@property (nonatomic) unsigned long long maxPayloadSize;

- (id)init;
- (id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2;
- (void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(CDUnknownBlockType)arg1;

@end
