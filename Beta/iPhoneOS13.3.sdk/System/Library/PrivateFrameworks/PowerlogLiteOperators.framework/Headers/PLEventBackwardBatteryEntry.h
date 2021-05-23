/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLEntry.h>

@interface PLEventBackwardBatteryEntry : PLEntry

+ (void)load;
+ (id)entryKey;
+ (id)levelWithRawData:(id)arg1;
+ (id)rawLevelWithRawData:(id)arg1;
+ (id)absoluteLevelWithRawData:(id)arg1;

- (void)dealloc;
- (id)initEntryWithRawData:(id)arg1;

@end
