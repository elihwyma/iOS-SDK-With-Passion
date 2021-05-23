/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface CPLChangeSessionUpdate : NSObject

{
    NSString *_libraryVersion;
    NSDate *_queuedDate;
}

@property (copy, nonatomic, readonly) NSString *libraryVersion;
@property (nonatomic, readonly) NSDate *queuedDate;
@property (nonatomic, readonly) NSString *statusDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (id)storageForStatusInStore:(id)arg1;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;

@end
