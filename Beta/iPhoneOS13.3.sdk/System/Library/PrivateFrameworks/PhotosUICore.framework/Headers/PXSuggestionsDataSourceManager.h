/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXSuggestionsDataSource;

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager

{
    unsigned short _dataSourceType;
}

@property (nonatomic, readonly) unsigned short dataSourceType;
@property (nonatomic, readonly) PXSuggestionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)typePredicateForDataSourceType:(unsigned short)arg1;
+ (id)baseFetchPredicate;
+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)arg1;

- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)createInitialDataSource;
- (id)initWithDataSourceType:(unsigned short)arg1;
- (void)_handleChangeWithDetails:(id)arg1;

@end
