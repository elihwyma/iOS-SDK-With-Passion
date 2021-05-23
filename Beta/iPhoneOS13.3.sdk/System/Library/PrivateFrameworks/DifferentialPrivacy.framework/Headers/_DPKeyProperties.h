/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSDictionary, NSNumber, NSString, _DPPrivacyBudget, _DPValueRange;

@interface _DPKeyProperties : NSObject

{
    _Bool _keyPatternsAllowed;
    NSString *_propertiesName;
    _DPValueRange *_possibleRange;
    NSNumber *_acceptableError;
    _DPValueRange *_trimmedScale;
    NSString *_noiseDistribution;
    _DPPrivacyBudget *_budget;
    NSNumber *_privacyParameter;
    unsigned long long _fragmentWidth;
    unsigned long long _fragmentCount;
    NSString *_serverAlgorithmString;
    NSDictionary *_parameterDictionary;
    unsigned long long _submissionPriority;
    unsigned long long _dataAlgorithm;
    unsigned long long _privatizationAlgorithm;
    unsigned long long _transport;
}

@property (nonatomic, readonly) unsigned long long dataAlgorithm;
@property (nonatomic, readonly) unsigned long long privatizationAlgorithm;
@property (nonatomic, readonly) unsigned long long transport;
@property (copy, nonatomic, readonly) NSString *propertiesName;
@property (nonatomic, readonly) _DPValueRange *possibleRange;
@property (nonatomic, readonly) NSNumber *acceptableError;
@property (nonatomic, readonly) _DPValueRange *trimmedScale;
@property (copy, nonatomic, readonly) NSString *noiseDistribution;
@property (nonatomic, readonly) _DPPrivacyBudget *budget;
@property (nonatomic, readonly) NSNumber *privacyParameter;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly) unsigned long long fragmentCount;
@property (copy, nonatomic, readonly) NSString *serverAlgorithmString;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly) _Bool keyPatternsAllowed;
@property (nonatomic, readonly) unsigned long long submissionPriority;

+ (void)initialize;
+ (id)keyPropertiesForName:(id)arg1;
+ (id)propertiesFromFile:(id)arg1;
+ (id)keyPropertiesFromDictionary:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)privatizationAlgorithmString;

@end
