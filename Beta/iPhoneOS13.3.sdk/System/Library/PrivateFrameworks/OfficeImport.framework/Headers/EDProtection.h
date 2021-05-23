/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface EDProtection : NSObject <Swift>

{
    _Bool mHidden;
    _Bool mLocked;
}

+ (id)protectionWithHidden:(_Bool)arg1 locked:(_Bool)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isHidden;
- (_Bool)isLocked;
- (id)initWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (_Bool)isEqualToProtection:(id)arg1;

@end
