/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSSpecifierAction : NSObject

{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
}

@property (copy, nonatomic) CDUnknownBlockType getter;
@property (copy, nonatomic) CDUnknownBlockType setter;

+ (id)actionWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
+ (id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3;
+ (id)actionWithBoolDetailClass:(Class)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
