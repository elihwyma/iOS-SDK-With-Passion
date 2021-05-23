/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBString;

@protocol _INPBMediaDestination <Swift>

@property (nonatomic) int mediaDestinationType;
@property (nonatomic) _Bool hasMediaDestinationType;
@property (retain, nonatomic) _INPBString *playlistName;
@property (nonatomic, readonly) _Bool hasPlaylistName;

- (unsigned short)mediaDestinationTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsMediaDestinationType: /* Error: Ran out of types for this method. */;

@end
