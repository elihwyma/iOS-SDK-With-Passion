/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSArray.h>

@interface NSArray (FPFetchThumbnailsOperation)

+ (id)fp_sortDescriptorByDisplayName;
+ (id)fp_sortDescriptorByModifiedDateDescending;
+ (id)fp_sortDescriptorByLastUsedDate;
+ (id)fp_sortDescriptorByDocumentSize;

- (id)fp_filter:(CDUnknownBlockType)arg1;
- (id)fp_map:(CDUnknownBlockType)arg1;
- (id)fp_itemIDs;
- (id)fp_shortDescriptionExpandingAtMost:(unsigned long long)arg1;
- (id)fp_mapWithIndex:(CDUnknownBlockType)arg1;
- (id)fp_removingObjectsNotKindOfClasses:(id)arg1;
- (id)fp_categorize:(CDUnknownBlockType)arg1;
- (id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2;
- (id)fp_itemIdentifiers;
- (CDUnknownBlockType)fp_comparator;
- (long long)fp_compareItem:(id)arg1 toItem:(id)arg2;
- (id)_fp_map:(CDUnknownBlockType)arg1;
- (id)_fp_filter:(CDUnknownBlockType)arg1;
- (id)_fp_componentsJoinedByOr;
- (id)_fp_componentsJoinedByAnd;
- (id)_fp_componentsWrappedInQuotes;

@end
