/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPTransformOperation.h>

@interface FPTrashOperation : FPTransformOperation

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;

@end
