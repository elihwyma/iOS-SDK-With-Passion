/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class DOCTagRegistryICloudDataSource, NSMutableOrderedSet, NSString;

@interface DOCTagRegistry : NSObject

{
    int _localStorageDidUpdateNotifyToken;
    _Bool _inBatchUpdate;
    _Bool _shouldSynchronizeAfterBatchUpdate;
    long long _tagSerialNumber;
    NSMutableOrderedSet *_userTags;
    NSMutableOrderedSet *_discoveredTags;
    DOCTagRegistryICloudDataSource *_iCloudDataSource;
}

@property (retain, nonatomic) NSMutableOrderedSet *userTags;
@property (retain, nonatomic) NSMutableOrderedSet *discoveredTags;
@property (nonatomic) _Bool shouldSynchronizeAfterBatchUpdate;
@property (retain, nonatomic) DOCTagRegistryICloudDataSource *iCloudDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool inBatchUpdate;
@property (nonatomic) long long tagSerialNumber;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)synchronize;
- (_Bool)addTag:(id)arg1;
- (id)_setForTagType:(long long)arg1;
- (void)addTag:(id)arg1 options:(long long)arg2;
- (_Bool)isValidNewTagName:(id)arg1;
- (id)_sanitizedTagName:(id)arg1;
- (id)_tagNameForComparing:(id)arg1;
- (_Bool)_canAddTag:(id)arg1;
- (id)_memberTag:(id)arg1;
- (_Bool)canReplaceTag:(id)arg1 withTag:(id)arg2;
- (void)addTags:(id)arg1 options:(long long)arg2;
- (_Bool)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeTags:(id)arg1;
- (void)removeAllTagsOfType:(long long)arg1;
- (_Bool)replaceTag:(id)arg1 withTag:(id)arg2;
- (_Bool)moveTag:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)tagForName:(id)arg1;

@end
