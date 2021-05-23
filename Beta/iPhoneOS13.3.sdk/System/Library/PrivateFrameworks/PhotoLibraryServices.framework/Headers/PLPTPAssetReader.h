/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPTPAssetReader : NSObject

{
    NSString *_path;
    id _userInfo;
    _Bool _shouldDeleteTemporaryFileOnDeallocation;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (retain, nonatomic) id userInfo;

- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1;
- (id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1;
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;

@end
