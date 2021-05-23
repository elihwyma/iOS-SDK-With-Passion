/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@class NSDictionary;

@protocol FPOperationProgressDelegate;

__attribute__((visibility("hidden")))
@interface FPFetchAppLibraryIconsOperation <Swift>

{
    NSDictionary *_itemIdentifierByAppBundleID;
    struct CGSize _desiredSize;
    double _screenScale;
    id <FPOperationProgressDelegate> _delegate;
}

@property (weak, nonatomic) id <FPOperationProgressDelegate> delegate;

- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppLibraryItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3;

@end
