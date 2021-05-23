/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface ECAuthScheme : NSObject

@property (copy, nonatomic, readonly) NSSet *supportedSASLMechanisms;
@property (nonatomic, readonly) _Bool requiresUsername;
@property (nonatomic, readonly) _Bool requiresPassword;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *humanReadableName;
@property (nonatomic, readonly) unsigned int applescriptScheme;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)knownSchemes;
+ (id)schemeWithName:(id)arg1;
+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;

@end
