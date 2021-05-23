/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface LPIconMetadata : NSObject

{
    unsigned int _version;
    NSURL *_URL;
    NSString *_accessibilityText;
}

@property (nonatomic, readonly) unsigned int version;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *accessibilityText;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithURL:(id)arg1;

@end
