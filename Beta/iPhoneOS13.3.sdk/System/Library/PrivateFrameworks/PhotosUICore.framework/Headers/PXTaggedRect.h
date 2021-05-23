/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXTaggedRect : NSObject

{
    unsigned long long _tag;
    struct CGRect _rect;
}

@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) struct CGRect rect;

- (id)init;
- (id)description;
- (id)initWithRect:(struct CGRect)arg1 tag:(unsigned long long)arg2;

@end
