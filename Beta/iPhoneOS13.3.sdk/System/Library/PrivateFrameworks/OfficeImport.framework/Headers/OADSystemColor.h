/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADSystemColor : OADColor

{
    int mSystemColorID;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSystemColorID:(int)arg1;
- (int)systemColorID;

@end
