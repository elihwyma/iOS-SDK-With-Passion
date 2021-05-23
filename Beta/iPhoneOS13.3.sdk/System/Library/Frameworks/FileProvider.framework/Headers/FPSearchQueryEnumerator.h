/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery, NSFileProviderSearchQuery, NSString;

@interface FPSearchQueryEnumerator : NSObject

{
    NSFileProviderSearchQuery *_fileProviderSearchQuery;
    NSString *_mountPoint;
    CSSearchQuery *_searchQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)_gatherItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_createSearchQuery;
- (id)_fpItemsFromSearchableItems:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2;

@end
