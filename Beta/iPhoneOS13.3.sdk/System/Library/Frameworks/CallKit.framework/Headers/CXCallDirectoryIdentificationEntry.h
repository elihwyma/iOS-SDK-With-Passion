/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject

{
    NSString *_extensionIdentifier;
    NSString *_localizedExtensionName;
    NSString *_localizedExtensionContainingAppName;
    NSString *_localizedLabel;
}

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *localizedExtensionName;
@property (copy, nonatomic) NSString *localizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *localizedLabel;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
