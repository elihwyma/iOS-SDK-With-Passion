/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject

{
    _Bool _isUplink;
    _Bool _allowsCellularAccess;
}

@property (nonatomic) _Bool isUplink;
@property (nonatomic) _Bool allowsCellularAccess;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
