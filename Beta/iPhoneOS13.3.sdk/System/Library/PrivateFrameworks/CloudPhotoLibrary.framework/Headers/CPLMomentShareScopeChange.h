/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLScopeChange.h>

@class CPLMomentShare;

@interface CPLMomentShareScopeChange : CPLScopeChange

{
    CPLMomentShare *_momentShare;
}

@property (copy, nonatomic) CPLMomentShare *momentShare;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)_setupWithLibraryInfo:(id)arg1;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(_Bool *)arg2;

@end
