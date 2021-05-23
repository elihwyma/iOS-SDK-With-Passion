/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <Swift>

{
    NSString *_nameSpace;
    NSString *_name;
    NUVersion *_version;
}

@property (readonly) NSString *nameSpace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (id)defaultNameSpace;
+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;
+ (id)latestIdentifierWithName:(id)arg1;
+ (id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2;
+ (id)identifierWithString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateIdentifierString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateIdentifierString:(id)arg1 space:(out id *)arg2 name:(out id *)arg3 version:(out id *)arg4 error:(out id *)arg5;
+ (id)identifierRegularExpression;
+ (_Bool)validateNameSpace:(id)arg1 error:(out id *)arg2;
+ (id)validNameSpaceRegularExpression;
+ (id)validNameRegularExpression;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3;
- (id)identifierWithVersion:(id)arg1;
- (_Bool)isEqualToIdentifier:(id)arg1;

@end
