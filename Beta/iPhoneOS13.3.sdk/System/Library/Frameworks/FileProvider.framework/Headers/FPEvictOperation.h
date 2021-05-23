/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPEvictOperation : FPActionOperation

{
    NSArray *_items;
}

- (id)initWithItems:(id)arg1;
- (void)actionMain;

@end
