/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString, NSValue;

__attribute__((visibility("hidden")))
@interface PDBuildMapKey : NSObject <Swift>

{
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)drawable;
- (void)setDrawable:(id)arg1;
- (id)initWithDrawable:(id)arg1 groupId:(id)arg2;

@end
