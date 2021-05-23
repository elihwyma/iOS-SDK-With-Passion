/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKOperationMMCSRequestOptions : NSObject

{
    _Bool _resumableContainerLimpMode;
    _Bool _chunkingLibraryCorruptionMode;
}

@property (nonatomic) _Bool resumableContainerLimpMode;
@property (nonatomic) _Bool chunkingLibraryCorruptionMode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
