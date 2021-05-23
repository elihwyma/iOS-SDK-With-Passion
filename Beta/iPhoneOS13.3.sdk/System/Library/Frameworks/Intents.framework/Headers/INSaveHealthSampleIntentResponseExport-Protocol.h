/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@protocol INSaveHealthSampleIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (copy, nonatomic) INDateComponentsRange *recordDate;
@property (copy, nonatomic) NSString *defaultUnit;
@property (copy, nonatomic) NSArray *valuesDefaultUnits;
@property (copy, nonatomic) NSString *userProvidedUnit;
@property (copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property (copy, nonatomic) NSString *punchoutUrl;

@end
