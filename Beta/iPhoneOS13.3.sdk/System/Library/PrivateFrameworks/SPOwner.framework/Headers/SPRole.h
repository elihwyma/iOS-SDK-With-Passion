/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPRole : NSObject

{
    long long _identifier;
    NSString *_name;
}

@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1;

@end
