/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@protocol FPCollectionDataSourceDelegate;

@protocol FPCollectionDataSource

@property (nonatomic, readonly) _Bool hasMoreIncoming;
@property (weak, nonatomic) id <FPCollectionDataSourceDelegate> delegate;

- (unsigned short)invalidate;
- (unsigned short)start;
- (unsigned short)enumerationMightHaveResumed;

@end
