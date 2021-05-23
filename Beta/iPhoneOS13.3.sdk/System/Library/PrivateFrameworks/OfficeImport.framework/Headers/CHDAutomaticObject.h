/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHDAutomaticObject : NSObject

{
    NSString *mName;
}

+ (id)automaticFill;
+ (id)automaticStroke;
+ (id)automaticEffects;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;

@end
