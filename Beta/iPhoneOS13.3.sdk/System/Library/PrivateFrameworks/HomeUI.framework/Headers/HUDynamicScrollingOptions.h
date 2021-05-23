/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUDynamicScrollingOptions : NSObject

{
    long long _viewSizeSubclass;
    CDStruct_d6c048b4 _textScaleSetting;
}

@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic) CDStruct_d6c048b4 textScaleSetting;

+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(_Bool)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end
