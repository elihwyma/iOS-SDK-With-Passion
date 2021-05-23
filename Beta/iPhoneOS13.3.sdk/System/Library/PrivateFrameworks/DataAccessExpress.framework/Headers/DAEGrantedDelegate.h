/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAEGrantedDelegate : NSObject

{
    NSString *_uri;
    NSString *_displayName;
    NSString *_preferredUserAddress;
    long long _permission;
}

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (nonatomic) long long permission;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
