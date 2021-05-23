/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString;

@interface NTKConnectivityTimelineEntryModel : NTKTimelineEntryModel

{
    NSString *_connectivity;
}

@property (retain, nonatomic) NSString *connectivity;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newUtilitarianLargeTemplate;

@end
