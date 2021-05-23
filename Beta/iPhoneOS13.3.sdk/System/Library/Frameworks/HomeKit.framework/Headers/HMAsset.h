/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface HMAsset : NSObject

{
    NSString *_identifier;
    NSDictionary *_metadata;
    NSURL *_resourceURL;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSURL *resourceURL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 resourceURL:(id)arg3;

@end
