/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBShareFileIntentResponse <Swift>

@property (nonatomic) _Bool confirm;
@property (nonatomic) _Bool hasConfirm;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) _Bool hasShareMode;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (unsigned short)recipientsType;

- (unsigned short)clearRecipients;
- (unsigned short)addRecipients: /* Error: Ran out of types for this method. */;
- (unsigned short)recipientsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)shareModeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsShareMode: /* Error: Ran out of types for this method. */;

@end
