/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

#import <MPUFoundation/Swift-Protocol.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <Swift>

{
    long long _invalidationIgnoreCount;
    long long _numberOfIgnoredInvalidations;
    long long _entityType;
}

@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) _Bool usesSections;
@property (nonatomic, readonly) _Bool showsIndexBar;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) NSArray *localizedSectionIndexTitles;
@property (nonatomic, readonly) _Bool showsEntityCountFooter;
@property (nonatomic, readonly) NSString *entityCountFormat;

+ (Class)invalidationContextClass;

- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(unsigned long long)arg1;
- (id)initWithEntityType:(long long)arg1;
- (_Bool)isIgnoringInvalidation;
- (id)entityAtIndex:(unsigned long long)arg1;
- (void)_invalidateCalculatedEntities;
- (void)invalidateWithContext:(id)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)_willInvalidateWithContext:(id)arg1;
- (void)_didInvalidateWithContext:(id)arg1;
- (id)sectionEntities;
- (id)anyEntity;
- (_Bool)canEditEntityAtIndexPath:(id)arg1;
- (void)deleteEntityAtIndexPath:(id)arg1;
- (long long)editingTypeForEntityAtIndexPath:(id)arg1;
- (id)entityAtIndexPath:(id)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfEntity:(id)arg1;
- (void)beginIgnoringInvalidation;
- (void)endIgnoringInvalidation;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (void)preloadEntities;
- (void)preloadSectionEntities;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionEntity:(id)arg1;

@end
