/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface IKAppPrototype : NSObject

{
    NSMutableIndexSet *_usageIndexes;
    IKAppPrototypeIdentifier *_identifier;
    IKDOMPrototype *_prototype;
    NSDictionary *_groupingValues;
}

@property (nonatomic, readonly) IKAppPrototypeIdentifier *identifier;
@property (weak, nonatomic, readonly) IKDOMPrototype *prototype;
@property (copy, nonatomic, readonly) NSDictionary *groupingValues;
@property (copy, nonatomic, readonly) NSIndexSet *usageIndexes;

- (id)dsepm_viewElement;
- (void)dsepm_setViewElement:(id)arg1;
- (void)updateUsageIndexesWithChangeSet:(id)arg1;
- (id)initWithPrototype:(id)arg1 dataItem:(id)arg2;
- (void)addUsageForIndex:(long long)arg1;
- (void)removeUsageForIndex:(long long)arg1;
- (id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2;

@end
