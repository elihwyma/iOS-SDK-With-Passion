/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPTransformOperation.h>

@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPTransformOperation

{
    NSArray *_items;
    NSDate *_date;
}

- (id)fp_prettyDescription;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 date:(id)arg2;

@end
