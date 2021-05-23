/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager

{
    NSString *_queryString;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) PXRecipientSearchDataSource *dataSource;
@property (copy, nonatomic) NSString *queryString;

- (void)queryStringDidChange;

@end
