/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@interface IDSURI : NSObject <Swift>

{
    NSString *_prefixedURI;
}

@property (retain, nonatomic) NSString *prefixedURI;
@property (nonatomic, readonly) NSString *unprefixedURI;

+ (_Bool)supportsSecureCoding;
+ (id)URIWithPrefixedURI:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnprefixedURI:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1;
- (_Bool)isEqualToURI:(id)arg1;

@end
