/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAppearanceCustomizableClassInfo : NSObject

{
    _Bool _isGuideClassRoot;
    _Bool _isCustomizableViewClassRoot;
    NSString *_classReferenceKey;
    unsigned long long _hash;
    Class _customizableViewClass;
    Class _guideClass;
}

@property (nonatomic, readonly) Class _customizableViewClass;
@property (nonatomic, readonly) Class _guideClass;
@property (nonatomic, readonly) NSString *_classReferenceKey;
@property (nonatomic, readonly) unsigned long long _hash;

+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;
+ (id)_cachedClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_superClassInfo;

@end
