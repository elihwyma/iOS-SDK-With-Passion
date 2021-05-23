/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate

{
    CPLChangeBatch *_scopesChangeBatch;
}

@property (nonatomic, readonly) CPLChangeBatch *scopesChangeBatch;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statusDescription;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (id)storageForStatusInStore:(id)arg1;
- (id)initWithStore:(id)arg1 scopesChangeBatch:(id)arg2;

@end
