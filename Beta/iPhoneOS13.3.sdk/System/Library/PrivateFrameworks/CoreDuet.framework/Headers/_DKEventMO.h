/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKObjectMO.h>

@class NSSet, NSString, _DKStructuredMetadataMO;

@interface _DKEventMO : _DKObjectMO

@property (nonatomic) double endDate;
@property (nonatomic) short endDayOfWeek;
@property (nonatomic) int endSecondOfDay;
@property (nonatomic) double startDate;
@property (nonatomic) short startDayOfWeek;
@property (nonatomic) int startSecondOfDay;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) double valueDouble;
@property (nonatomic) long long valueInteger;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) short valueClass;
@property (nonatomic) long long valueTypeCode;
@property (nonatomic) long long secondsFromGMT;
@property (nonatomic) double confidence;
@property (retain, nonatomic) _DKObjectMO *value;
@property (nonatomic) _Bool shouldSync;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) _Bool hasCustomMetadata;
@property (retain, nonatomic) NSSet *customMetadata;
@property (nonatomic) _Bool hasStructuredMetadata;
@property (retain, nonatomic) _DKStructuredMetadataMO *structuredMetadata;

@end
