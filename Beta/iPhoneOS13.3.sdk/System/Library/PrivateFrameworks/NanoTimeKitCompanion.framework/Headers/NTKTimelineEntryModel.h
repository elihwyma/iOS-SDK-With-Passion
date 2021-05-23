/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface NTKTimelineEntryModel : NSObject

{
    NSDate *_entryDate;
}

@property (retain, nonatomic) NSDate *entryDate;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)entryForComplicationFamily:(long long)arg1;

@end
