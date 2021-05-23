/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBActivateCarSignalIntent <Swift>

@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic, readonly) int *signals;
@property (nonatomic, readonly) unsigned long long signalsCount;

- (unsigned short)clearSignals;
- (unsigned short)addSignals: /* Error: Ran out of types for this method. */;
- (unsigned short)signalsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setSignals:count: /* Error: Ran out of types for this method. */;
- (unsigned short)signalsAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSignals: /* Error: Ran out of types for this method. */;

@end
