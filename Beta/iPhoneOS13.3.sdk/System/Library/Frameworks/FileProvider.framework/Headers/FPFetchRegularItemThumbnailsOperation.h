/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@class FPItemManager, NSArray;

@protocol FPOperationProgressDelegate;

__attribute__((visibility("hidden")))
@interface FPFetchRegularItemThumbnailsOperation <Swift>

{
    NSArray *_itemIDs;
    struct CGSize _desiredSizeToScale;
    FPItemManager *_itemManager;
    id <FPOperationProgressDelegate> _delegate;
}

@property (weak, nonatomic) id <FPOperationProgressDelegate> delegate;

- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRegularItems:(id)arg1 desiredSizeToScale:(struct CGSize)arg2 itemManager:(id)arg3;

@end
