/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface LPArtworkMetadata : NSObject

{
    unsigned int _version;
    NSURL *_URL;
    NSDictionary *_colors;
}

@property (nonatomic, readonly) unsigned int version;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *colors;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
