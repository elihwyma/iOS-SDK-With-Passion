/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UISUISecurityScopedResource.h>

@class NSString;

@interface UISUIOpenInByCopySecurityScopedResource : UISUISecurityScopedResource

{
    NSString *_bookmarkExportDataEncodedAsString;
}

@property (copy, nonatomic) NSString *bookmarkExportDataEncodedAsString;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
