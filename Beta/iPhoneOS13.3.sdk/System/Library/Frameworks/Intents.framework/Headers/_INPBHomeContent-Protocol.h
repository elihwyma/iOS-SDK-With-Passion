/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBHomeFilter;

@protocol _INPBHomeContent <Swift>

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBHomeFilter *filter;
@property (nonatomic, readonly) _Bool hasFilter;

+ (unsigned short)actionsType;

- (unsigned short)actionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearActions;
- (unsigned short)addActions: /* Error: Ran out of types for this method. */;

@end
