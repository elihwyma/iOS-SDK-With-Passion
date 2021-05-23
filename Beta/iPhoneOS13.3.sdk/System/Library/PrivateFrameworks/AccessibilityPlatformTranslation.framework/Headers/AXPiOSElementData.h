/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
 */

#import <Foundation/NSObject.h>

@interface AXPiOSElementData : NSObject

{
    int _pid;
    CDStruct_26bd94fa _uid;
}

@property (nonatomic) CDStruct_26bd94fa uid;
@property (nonatomic) int pid;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
