/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation

{
    FPItem *_restoreDirectory;
    CDUnknownBlockType _untrashCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType untrashCompletionBlock;

- (id)fp_prettyDescription;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;

@end
