/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUUserActivityContext.h>

@class NSArray, NSMutableArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext

{
    NSMutableArray *_containerItems;
}

@property (copy, nonatomic) NSArray *containerItems;
@property (nonatomic) long long originatorType;
@property (nonatomic) long long originatorVersion;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addContainerItem:(id)arg1;
- (void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (void)removeContainerItem:(id)arg1;

@end
