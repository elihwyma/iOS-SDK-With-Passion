/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class NSArray;

@interface FPUnionCollection

{
    NSArray *_collections;
}

@property (retain, nonatomic) NSArray *collections;

- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)initWithCollections:(id)arg1;

@end
