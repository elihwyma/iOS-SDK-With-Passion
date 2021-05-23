/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ILMessageFilterQueryResponse : NSObject

{
    long long _action;
    NSString *_version;
}

@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long action;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToQueryResponse:(id)arg1;

@end
