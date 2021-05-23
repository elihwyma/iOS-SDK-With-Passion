/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPDeleteOperation : FPActionOperation

{
    NSArray *_items;
}

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)actionMain;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end
