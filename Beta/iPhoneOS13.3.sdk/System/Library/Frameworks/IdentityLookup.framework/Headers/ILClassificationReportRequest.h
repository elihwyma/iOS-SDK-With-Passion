/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ILClassificationReportRequest : NSObject

{
    NSString *_extensionIdentifier;
    NSDictionary *_jsonDictionary;
}

@property (copy, nonatomic, readonly) NSString *extensionIdentifier;
@property (copy, nonatomic) NSDictionary *jsonDictionary;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2;

@end
