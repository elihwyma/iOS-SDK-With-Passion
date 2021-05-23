/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBListShortcutsIntentResponse <Swift>

@property (copy, nonatomic) NSArray *shortcuts;
@property (nonatomic, readonly) unsigned long long shortcutsCount;

+ (unsigned short)shortcutsType;

- (unsigned short)clearShortcuts;
- (unsigned short)addShortcuts: /* Error: Ran out of types for this method. */;
- (unsigned short)shortcutsAtIndex: /* Error: Ran out of types for this method. */;

@end
