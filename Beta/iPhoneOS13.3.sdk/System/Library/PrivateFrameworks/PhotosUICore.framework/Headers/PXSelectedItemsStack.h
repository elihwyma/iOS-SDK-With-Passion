/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSString;

@interface PXSelectedItemsStack : PXObservable

{
    long long _depth;
    NSArray *_topItems;
    NSArray *_topItemReferences;
}

@property (copy, nonatomic) NSArray *topItemReferences;
@property (copy, nonatomic) NSArray *topItems;
@property (nonatomic, readonly) long long depth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDepth:(long long)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)updateWithSelectedItemsSnapshot:(id)arg1;

@end
