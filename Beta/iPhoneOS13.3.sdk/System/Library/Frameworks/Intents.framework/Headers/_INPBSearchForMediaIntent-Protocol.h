/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBMediaSearch;

@protocol _INPBSearchForMediaIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (nonatomic, readonly) _Bool hasMediaSearch;

+ (unsigned short)mediaItemsType;

- (unsigned short)addMediaItems: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMediaItems;
- (unsigned short)mediaItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
