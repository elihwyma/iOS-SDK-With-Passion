/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGLayout;

@interface PXGFence : NSObject

{
    unsigned long long _type;
    PXGLayout *_layout;
}

@property (weak, nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) unsigned long long type;

- (id)init;
- (id)initWithLayout:(id)arg1 type:(unsigned long long)arg2;

@end
