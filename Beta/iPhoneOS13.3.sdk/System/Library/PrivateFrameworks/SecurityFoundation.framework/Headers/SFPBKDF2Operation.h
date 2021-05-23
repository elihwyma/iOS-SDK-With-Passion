/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol SFPseudoRandomFunction;

@interface SFPBKDF2Operation : NSObject

{
    id _pbkdf2OperationInternal;
}

@property (copy, nonatomic) id <SFPseudoRandomFunction> pseudoRandomFunction;
@property (nonatomic) long long iterationCount;
@property (copy, nonatomic) NSData *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_randomSalt;
+ (long long)keySource;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;

@end
