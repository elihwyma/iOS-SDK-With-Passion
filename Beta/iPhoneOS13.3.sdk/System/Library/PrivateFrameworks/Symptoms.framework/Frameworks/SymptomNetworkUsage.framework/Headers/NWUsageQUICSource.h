/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWUsageSource.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NWUsageQUICSource : NWUsageSource

{
    struct updater_nstat_msg_src_update_quic _nstatQUICUpdate;
    NSDictionary *_lookupResults;
}

- (id)createSnapshot:(int)arg1;
- (_Bool)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg1 monitor:(id)arg2;
- (id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg1 monitor:(id)arg2;
- (void)deriveAttribution:(id)arg1;

@end
