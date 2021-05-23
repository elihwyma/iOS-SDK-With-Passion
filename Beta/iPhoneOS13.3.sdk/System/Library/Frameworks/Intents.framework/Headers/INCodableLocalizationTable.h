/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INCodableLocalizationTable : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    NSString *_tableName;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *tableName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 tableName:(id)arg2;

@end
