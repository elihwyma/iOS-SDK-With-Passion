/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBListShortcutsIntent <Swift>

@property (copy, nonatomic) NSArray *appTitles;
@property (nonatomic, readonly) unsigned long long appTitlesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int originDevice;
@property (nonatomic) _Bool hasOriginDevice;

+ (unsigned short)appTitleType;

- (unsigned short)clearAppTitles;
- (unsigned short)addAppTitle: /* Error: Ran out of types for this method. */;
- (unsigned short)appTitleAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)originDeviceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsOriginDevice: /* Error: Ran out of types for this method. */;

@end
