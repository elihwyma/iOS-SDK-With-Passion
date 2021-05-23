/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBDeleteHealthSampleIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (nonatomic, readonly) unsigned long long sampleUuidsCount;

+ (unsigned short)sampleUuidsType;

- (unsigned short)clearSampleUuids;
- (unsigned short)addSampleUuids: /* Error: Ran out of types for this method. */;
- (unsigned short)sampleUuidsAtIndex: /* Error: Ran out of types for this method. */;

@end
