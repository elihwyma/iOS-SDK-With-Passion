/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISIconResourceLocator.h>

#import <IconServices/Swift-Protocol.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <Swift>

{
    NSString *_type;
}

@property (readonly) NSString *type;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bundleIdentifier;
- (id)initWithType:(id)arg1;
- (_Bool)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;

@end
