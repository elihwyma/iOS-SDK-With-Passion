/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@interface HFTransformItem : HFItem <Swift>

{
    HFItem *_sourceItem;
    CDUnknownBlockType _optionsTransformBlock;
    CDUnknownBlockType _resultsTransformBlock;
}

@property (retain, nonatomic) HFItem *sourceItem;
@property (copy, nonatomic) CDUnknownBlockType optionsTransformBlock;
@property (copy, nonatomic) CDUnknownBlockType resultsTransformBlock;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(CDUnknownBlockType)arg2 resultsTransformBlock:(CDUnknownBlockType)arg3;
- (id)initWithSourceItem:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2;

@end
