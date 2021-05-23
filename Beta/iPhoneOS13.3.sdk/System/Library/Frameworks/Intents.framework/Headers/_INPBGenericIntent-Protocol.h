/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@protocol _INPBGenericIntent <Swift>

@property (copy, nonatomic) NSString *domain;
@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic, readonly) _Bool hasVerb;

+ (unsigned short)parametersType;

- (unsigned short)clearParameters;
- (unsigned short)parametersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addParameters: /* Error: Ran out of types for this method. */;

@end
