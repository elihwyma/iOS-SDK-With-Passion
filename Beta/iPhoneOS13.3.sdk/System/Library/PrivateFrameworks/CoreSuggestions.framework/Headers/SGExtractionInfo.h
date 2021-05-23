/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSNumber;

@interface SGExtractionInfo : SGObject

{
    unsigned long long _extractionType;
    NSNumber *_modelVersion;
    NSNumber *_confidence;
}

@property (nonatomic, readonly) unsigned long long extractionType;
@property (nonatomic, readonly) NSNumber *modelVersion;
@property (nonatomic, readonly) NSNumber *confidence;

+ (id)extractionInfoWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;

- (id)initWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3;

@end
