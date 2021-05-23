/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ASTIdentityAlias : NSObject

{
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSDictionary *dictionary;

+ (_Bool)supportsSecureCoding;
+ (id)identityAliasWithSerialNumber:(id)arg1;
+ (id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1;
+ (id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (id)initWithMainLogicBoardSerialNumber:(id)arg1;
- (id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2;

@end
