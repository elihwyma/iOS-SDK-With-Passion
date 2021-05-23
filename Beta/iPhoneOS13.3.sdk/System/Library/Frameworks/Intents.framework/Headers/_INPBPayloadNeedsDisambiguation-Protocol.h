/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBPayloadNeedsDisambiguation <Swift>

@property (copy, nonatomic) NSArray *disambiguationItems;
@property (nonatomic, readonly) unsigned long long disambiguationItemsCount;

+ (unsigned short)disambiguationItemsType;

- (unsigned short)clearDisambiguationItems;
- (unsigned short)addDisambiguationItems: /* Error: Ran out of types for this method. */;
- (unsigned short)disambiguationItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
