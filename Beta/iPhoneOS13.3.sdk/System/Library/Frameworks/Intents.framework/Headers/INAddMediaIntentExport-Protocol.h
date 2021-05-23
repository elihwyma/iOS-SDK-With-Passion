/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INMediaDestination, INMediaSearch, NSArray;

@protocol INAddMediaIntentExport <Swift>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INMediaDestination *mediaDestination;

- (unsigned short)init;

@end
