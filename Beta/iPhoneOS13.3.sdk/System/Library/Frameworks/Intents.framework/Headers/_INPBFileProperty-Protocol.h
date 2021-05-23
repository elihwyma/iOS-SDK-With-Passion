/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBFilePropertyValue;

@protocol _INPBFileProperty <Swift>

@property (nonatomic) int name;
@property (nonatomic) _Bool hasName;
@property (nonatomic) int qualifier;
@property (nonatomic) _Bool hasQualifier;
@property (retain, nonatomic) _INPBFilePropertyValue *value;
@property (nonatomic, readonly) _Bool hasValue;

- (unsigned short)nameAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsName: /* Error: Ran out of types for this method. */;
- (unsigned short)qualifierAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsQualifier: /* Error: Ran out of types for this method. */;

@end
