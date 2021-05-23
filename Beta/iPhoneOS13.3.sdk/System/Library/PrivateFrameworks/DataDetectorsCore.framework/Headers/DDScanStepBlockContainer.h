/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface DDScanStepBlockContainer : NSObject

{
    CDUnknownBlockType _block;
    long long _identifier;
}

@property (nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) long long identifier;

- (id)initWithBlock:(CDUnknownBlockType)arg1 identifier:(long long)arg2;

@end
