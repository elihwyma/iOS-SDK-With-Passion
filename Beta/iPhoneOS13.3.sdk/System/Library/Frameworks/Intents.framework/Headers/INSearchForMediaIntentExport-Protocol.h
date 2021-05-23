/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INMediaSearch, NSArray;

@protocol INSearchForMediaIntentExport <Swift>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaSearch *mediaSearch;

- (unsigned short)init;

@end
