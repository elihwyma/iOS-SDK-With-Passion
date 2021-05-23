/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider

{
    HFItemProvider *_sourceProvider;
    CDUnknownBlockType _transformationBlock;
    NSMutableDictionary *_transformedItems;
}

@property (retain, nonatomic) HFItemProvider *sourceProvider;
@property (copy, nonatomic) CDUnknownBlockType transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithSourceProvider:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;

@end
