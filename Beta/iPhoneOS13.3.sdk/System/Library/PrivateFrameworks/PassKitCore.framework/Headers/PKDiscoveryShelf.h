/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKDiscoveryShelf : NSObject <Swift>

{
    long long _type;
}

@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)shelfWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
