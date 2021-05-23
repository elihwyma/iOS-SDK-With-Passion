/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

__attribute__((visibility("hidden")))
@interface _UIImageStackImageAsset : UIImageAsset

{
    CUICatalog *_catalog;
    NSData *_stackData;
}

@property (retain, nonatomic) CUICatalog *catalog;
@property (copy, nonatomic) NSData *stackData;

- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)imageWithConfiguration:(id)arg1;

@end
