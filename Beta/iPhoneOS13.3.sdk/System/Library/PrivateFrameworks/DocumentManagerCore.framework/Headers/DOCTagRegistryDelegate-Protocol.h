/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <DocumentManagerCore/Swift-Protocol.h>

@class MISSING_TYPE, NSOrderedSet;

@protocol DOCTagRegistryDelegate <Swift>

@property (nonatomic) _Bool inBatchUpdate;
@property (nonatomic) long long tagSerialNumber;
@property (nonatomic, readonly) NSOrderedSet *userTags;
@property (nonatomic, readonly) NSOrderedSet *discoveredTags;

- (MISSING_TYPE *)addTag: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addTag:options: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isValidNewTagName: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)canReplaceTag:withTag: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)addTags:options: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)insertTag:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeTags: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeAllTagsOfType: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)replaceTag:withTag: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)moveTag:toIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)tagForName: /* Error: Ran out of types for this method. */;

@end
