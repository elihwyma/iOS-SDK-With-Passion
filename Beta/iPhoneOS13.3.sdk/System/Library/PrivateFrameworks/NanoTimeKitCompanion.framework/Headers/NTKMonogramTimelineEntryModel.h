/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString;

@interface NTKMonogramTimelineEntryModel : NTKTimelineEntryModel

{
    NSString *_monogram;
}

@property (copy, nonatomic) NSString *monogram;

- (id)_newSimpleTextTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end
