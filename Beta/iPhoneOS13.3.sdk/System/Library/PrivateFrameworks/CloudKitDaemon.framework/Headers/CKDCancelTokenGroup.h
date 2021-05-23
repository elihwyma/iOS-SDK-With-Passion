/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDCancelTokenGroup : NSObject

{
    NSMutableArray *_cancelTokens;
}

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (id)init;
- (void)cancel;
- (void)removeAllCancelTokens;
- (void)addCancelToken:(id)arg1 withOperation:(id)arg2;
- (void)removeCancelToken:(id)arg1;

@end
