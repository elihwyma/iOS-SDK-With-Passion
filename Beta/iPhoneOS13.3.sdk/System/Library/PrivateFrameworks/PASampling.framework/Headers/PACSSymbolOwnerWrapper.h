/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper

{
    NSString *_path;
    _Bool _usedDsymForUUID;
}

@property (weak, readonly) NSString *path;
@property _Bool usedDsymForUUID;

- (id)debugDescription;
- (id)initWithSymbolOwner:(struct _CSTypeRef)arg1;
- (id)initWithSymbolOwner:(struct _CSTypeRef)arg1 andPath:(id)arg2;

@end
