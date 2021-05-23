/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SFECDHOperation : NSObject

{
    id _ecdhOperationInternal;
}

@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (long long)keySource;
+ (long long)_defaultMode;
+ (id)_defaultOperation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;

@end
