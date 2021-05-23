/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FPTransformOperation : FPActionOperation

{
    NSArray *_items;
    CDUnknownBlockType _transformCompletionBlock;
}

@property (nonatomic, readonly) NSArray *items;
@property (copy, nonatomic) CDUnknownBlockType transformCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;

@end
