/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, PUTilingDataSource;

@interface PUTilingViewUpdateItem : NSObject

{
    long long _action;
    NSIndexPath *_indexPathBeforeUpdate;
    NSIndexPath *_indexPathAfterUpdate;
    PUTilingDataSource *_dataSource;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) PUTilingDataSource *dataSource;

- (id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4;
- (id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2;

@end
