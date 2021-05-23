/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSProcessInfo.h>

@interface NSProcessInfo (CRKAdditions)

@property (nonatomic, readonly, getter=crk_isBeingTested) _Bool crk_beingTested;

- (_Bool)crk_hasEntitlement:(id)arg1 withValue:(id)arg2;

@end
