/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSSet;

@interface HFItemProviderReloadResults : NSObject <Swift>

{
    NSSet *_addedItems;
    NSSet *_removedItems;
    NSSet *_existingItems;
}

@property (retain, nonatomic) NSSet *addedItems;
@property (retain, nonatomic) NSSet *removedItems;
@property (retain, nonatomic) NSSet *existingItems;
@property (nonatomic, readonly) NSSet *allItems;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resultsByMergingWithResults:(id)arg1;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3;

@end
