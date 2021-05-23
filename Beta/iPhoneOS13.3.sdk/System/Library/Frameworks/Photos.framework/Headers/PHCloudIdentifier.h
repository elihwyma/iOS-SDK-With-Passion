/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHCloudIdentifier : NSObject

{
    NSString *_localCloudIdentifier;
    NSString *_identifierCode;
}

@property (nonatomic, readonly) NSString *localCloudIdentifier;
@property (nonatomic, readonly) NSString *identifierCode;
@property (nonatomic, readonly) NSString *stringValue;

+ (_Bool)supportsSecureCoding;
+ (id)notFoundIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2;
- (id)initAsNotFoundIdentifier;

@end
