/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)index:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)reindexAllSearchableItemsForIndex:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndexDidThrottle:(id)arg1;
- (void)searchableIndexDidFinishThrottle:(id)arg1;

@end
