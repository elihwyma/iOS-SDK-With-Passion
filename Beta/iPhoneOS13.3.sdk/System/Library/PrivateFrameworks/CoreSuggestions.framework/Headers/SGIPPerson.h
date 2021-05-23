/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGIPPerson : NSObject

{
    NSString *_name;
    NSString *_handle;
    NSString *_handleType;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *handleType;

+ (_Bool)supportsSecureCoding;
+ (id)personWithIPPerson:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toIPPerson;
- (_Bool)isEqualToPerson:(id)arg1;

@end
