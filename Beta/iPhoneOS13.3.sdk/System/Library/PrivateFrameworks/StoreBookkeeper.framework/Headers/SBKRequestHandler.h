/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class SBKStoreURLBagContext;

__attribute__((visibility("hidden")))
@interface SBKRequestHandler : NSObject

{
    SBKStoreURLBagContext *_bagContext;
}

@property (nonatomic, readonly) SBKStoreURLBagContext *bagContext;

- (void)cancel;
- (void)timeout;
- (id)initWithBagContext:(id)arg1;

@end
