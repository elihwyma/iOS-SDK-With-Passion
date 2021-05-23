/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface ILNetworkResponse : NSObject

{
    NSHTTPURLResponse *_urlResponse;
    NSData *_data;
}

@property (copy, nonatomic) NSHTTPURLResponse *urlResponse;
@property (copy, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;

@end
