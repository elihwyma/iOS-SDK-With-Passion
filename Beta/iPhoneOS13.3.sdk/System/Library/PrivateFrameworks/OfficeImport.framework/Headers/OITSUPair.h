/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUPair : NSObject <Swift>

{
    id mFirst;
    id mSecond;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

+ (id)pair;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (id)pairWithPair:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithPair:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (void)p_SetSecond:(id)arg1;

@end
