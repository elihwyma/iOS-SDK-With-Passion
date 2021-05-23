/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSString;

@interface WFType : NSObject <Swift>

@property (nonatomic, readonly) NSString *typeDescription;
@property (copy, nonatomic, readonly) NSString *string;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)conformsToUTType:(const struct __CFString *)arg1;
- (_Bool)conformsToTypes:(id)arg1;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)isEqualToUTType:(const struct __CFString *)arg1;
- (_Bool)conformsToClass:(Class)arg1;
- (_Bool)isEqualToClass:(Class)arg1;

@end
