/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSOperation.h>

@class IKAppContext, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesFetchOperation : NSOperation

{
    NSArray *_mediaEntities;
    NSString *_mediaCategory;
    NSString *_mediaCollectionType;
    IKAppContext *_appContext;
    NSString *_mediaEntitySubtype;
    NSDictionary *_options;
}

@property (retain, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSString *mediaEntitySubtype;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (retain, nonatomic) NSString *mediaCategory;
@property (retain, nonatomic) NSString *mediaCollectionType;

+ (id)_numberForObject:(id)arg1;
+ (id)_timeIntervalNumberForObject:(id)arg1;
+ (id)_mpPropertiesForProperties:(id)arg1;
+ (id)_mpOrderingDirectionMappingForSortDirectionMapping:(id)arg1;

- (id)init;
- (void)main;
- (_Bool)_prepare;
- (id)_mediaQuery;
- (_Bool)_isItemsFetch;
- (_Bool)_isCollectionsFetch;
- (id)initWithAppContext:(id)arg1 options:(id)arg2;
- (id)_baseMediaQuery;
- (void)_addPredicatesToMediaQuery:(id)arg1 withFilters:(id)arg2;
- (void)_setSortOrderingForMediaQuery:(id)arg1 withSortProperties:(id)arg2 sortDirectionMapping:(id)arg3;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1 prefetchProperties:(id)arg2;

@end
