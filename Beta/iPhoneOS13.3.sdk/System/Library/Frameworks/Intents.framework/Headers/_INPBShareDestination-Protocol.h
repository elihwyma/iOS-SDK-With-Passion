/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact;

@protocol _INPBShareDestination <Swift>

@property (retain, nonatomic) _INPBContact *contact;
@property (nonatomic, readonly) _Bool hasContact;
@property (nonatomic) int deviceType;
@property (nonatomic) _Bool hasDeviceType;

- (unsigned short)deviceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDeviceType: /* Error: Ran out of types for this method. */;

@end
