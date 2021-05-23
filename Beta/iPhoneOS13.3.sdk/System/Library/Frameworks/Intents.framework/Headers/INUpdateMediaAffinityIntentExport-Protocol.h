/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INMediaSearch, NSArray;

@protocol INUpdateMediaAffinityIntentExport <Swift>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (nonatomic) long long affinityType;

- (unsigned short)init;

@end
