/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

{
    id <OKCollectionProxyDataSource> _dataSource;
    unsigned long long _tag;
}

@property (nonatomic) id <OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)objectAtIndexPath:(id)arg1;

@end
