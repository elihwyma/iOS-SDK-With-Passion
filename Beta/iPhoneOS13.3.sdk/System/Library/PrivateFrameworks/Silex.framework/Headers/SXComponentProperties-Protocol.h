/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;

@protocol SXComponentProperties <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) SXComponentConditions *conditions;
@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) SXComponentClassification *classification;
@property (nonatomic, readonly) SXJSONArray *additions;

@end
