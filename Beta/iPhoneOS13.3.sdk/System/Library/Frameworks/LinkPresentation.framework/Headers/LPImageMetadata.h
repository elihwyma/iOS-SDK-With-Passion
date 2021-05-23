/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface LPImageMetadata : NSObject

{
    unsigned int _version;
    NSURL *_URL;
    NSString *_type;
    NSString *_accessibilityText;
    struct CGSize _size;
}

@property (nonatomic, readonly) unsigned int version;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSString *accessibilityText;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end
