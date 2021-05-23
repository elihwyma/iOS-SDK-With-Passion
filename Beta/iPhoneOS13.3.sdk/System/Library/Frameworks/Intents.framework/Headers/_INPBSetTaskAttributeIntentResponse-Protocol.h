/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBTask;

@protocol _INPBSetTaskAttributeIntentResponse <Swift>

@property (retain, nonatomic) _INPBTask *modifiedTask;
@property (nonatomic, readonly) _Bool hasModifiedTask;
@property (nonatomic, readonly) int *warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

- (unsigned short)clearWarnings;
- (unsigned short)addWarnings: /* Error: Ran out of types for this method. */;
- (unsigned short)warningsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setWarnings:count: /* Error: Ran out of types for this method. */;
- (unsigned short)warningsAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsWarnings: /* Error: Ran out of types for this method. */;

@end
