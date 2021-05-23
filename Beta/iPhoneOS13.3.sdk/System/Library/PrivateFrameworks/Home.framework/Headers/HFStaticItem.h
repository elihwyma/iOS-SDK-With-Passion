/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <Swift>

{
    NSDictionary *_staticResults;
    CDUnknownBlockType _resultsBlock;
}

@property (retain, nonatomic) NSDictionary *staticResults;
@property (copy, nonatomic) CDUnknownBlockType resultsBlock;

+ (id)emptyItem;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResults:(id)arg1;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
