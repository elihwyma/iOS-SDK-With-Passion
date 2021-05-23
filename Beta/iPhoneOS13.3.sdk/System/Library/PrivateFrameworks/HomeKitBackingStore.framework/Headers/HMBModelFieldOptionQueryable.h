/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelFieldOption.h>

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionQueryable : HMBModelFieldOption

{
    CDUnknownBlockType _encodingBlock;
    CDUnknownBlockType _decodingBlock;
    CDUnknownBlockType _descriptionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType encodingBlock;
@property (copy, nonatomic) CDUnknownBlockType decodingBlock;
@property (copy, nonatomic) CDUnknownBlockType descriptionBlock;

- (void)applyTo:(id)arg1;
- (id)initWithEncodingBlock:(CDUnknownBlockType)arg1 decodingBlock:(CDUnknownBlockType)arg2 descriptionBlock:(CDUnknownBlockType)arg3;

@end
