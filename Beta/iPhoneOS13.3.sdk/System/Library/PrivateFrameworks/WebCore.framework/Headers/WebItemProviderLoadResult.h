/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSArray, NSItemProvider;

__attribute__((visibility("hidden")))
@interface WebItemProviderLoadResult : NSObject

{
    struct RetainPtr<NSMutableDictionary<NSString *, NSURL *>> _fileURLs;
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<NSArray<NSString *>> _typesToLoad;
}

@property (nonatomic, readonly) NSArray *loadedFileURLs;
@property (nonatomic, readonly) NSArray *loadedTypeIdentifiers;
@property (nonatomic, readonly) _Bool canBeRepresentedAsFileUpload;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSArray *typesToLoad;

+ (id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2;

- (id)description;
- (id).cxx_construct;
- (id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2;
- (id)fileURLForType:(id)arg1;
- (void)setFileURL:(id)arg1 forType:(id)arg2;

@end
