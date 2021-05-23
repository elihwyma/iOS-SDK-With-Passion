/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@interface IDSAutoCleanup : NSObject

{
    CDUnknownBlockType _cleanupBlock;
    int _accessCount;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)incrementAccessCount;

@end
