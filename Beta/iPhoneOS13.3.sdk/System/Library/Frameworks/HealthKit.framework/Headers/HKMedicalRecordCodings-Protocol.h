/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@class NSArray;

@protocol HKMedicalRecordCodings <Swift>

@property (nonatomic, readonly) NSArray *indexKeywords;
@property (nonatomic, readonly) NSArray *medicalRecordCodings;
@property (nonatomic, readonly) NSArray *medicalRecordPreferredSystems;

+ (unsigned short)defaultDisplayString;

- (unsigned short)primaryCodingContext;
- (unsigned short)fallbackDisplayString;

@end
