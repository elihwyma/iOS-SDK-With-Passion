/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class HKUnit, INDateComponentsRange, NSArray;

@protocol INSaveHealthSampleIntentExport <Swift>

@property (copy, nonatomic) INDateComponentsRange *recordDate;
@property (nonatomic) long long objectType;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) HKUnit *unit;
@property (copy, nonatomic) NSArray *sampleMetadatas;

- (unsigned short)init;

@end
