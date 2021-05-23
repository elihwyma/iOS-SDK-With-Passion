/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPUnpinOperation : FPActionOperation

{
    NSArray *_items;
}

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)actionMain;
- (void)presendNotifications;

@end
