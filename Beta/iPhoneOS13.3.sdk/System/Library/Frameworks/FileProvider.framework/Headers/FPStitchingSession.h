/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPStitchingSession : NSObject

{
    NSMutableDictionary *_stitchedFields;
    NSMutableDictionary *_originalItems;
    NSMutableDictionary *_stitchedItems;
    NSMutableDictionary *_stitchedPlaceholders;
    NSMutableDictionary *_placeholderReplacements;
    NSMutableDictionary *_deletedItems;
    _Bool _started;
    _Bool _finished;
    CDUnknownBlockType _placeholdersCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType placeholdersCreationBlock;
@property (nonatomic, readonly) NSArray *placeholderItems;
@property (nonatomic, readonly) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property (nonatomic, readonly) NSArray *placeholderReplacementsIDs;
@property (nonatomic, readonly) _Bool isActive;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)finish;
- (void)flush;
- (void)deleteItems:(id)arg1;
- (id)createArchivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3;
- (id)createGenericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2;
- (void)associateItem:(id)arg1 withPlaceholderID:(id)arg2;
- (void)finishWithItem:(id)arg1 error:(id)arg2;
- (id)createPlaceholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
- (id)createPlaceholderWithName:(id)arg1 isFolder:(_Bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
- (void)finishWithItems:(id)arg1 error:(id)arg2;
- (void)transformItems:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)replacePlaceholderWithID:(id)arg1 withItem:(id)arg2;
- (id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4;
- (id)itemWithPlaceholderID:(id)arg1;

@end
