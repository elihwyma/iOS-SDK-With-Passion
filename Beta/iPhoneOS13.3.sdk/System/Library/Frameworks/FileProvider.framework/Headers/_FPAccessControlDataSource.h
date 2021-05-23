/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@protocol FPCollectionDataSourceDelegate, FPXEnumerator, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FPAccessControlDataSource : NSObject

{
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasMoreIncoming;
    id <FPCollectionDataSourceDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool hasMoreIncoming;
@property (weak, nonatomic) id <FPCollectionDataSourceDelegate> delegate;

- (void)invalidate;
- (void)start;
- (void)enumerationMightHaveResumed;
- (id)initWithEnumerator:(id)arg1;
- (void)handleItems:(id)arg1 nextPage:(id)arg2;

@end
