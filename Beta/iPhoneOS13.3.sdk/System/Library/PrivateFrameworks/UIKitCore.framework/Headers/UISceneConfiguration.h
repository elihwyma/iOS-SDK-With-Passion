/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <Swift>

{
    _Bool _hadResolutionErrorsOnLoad;
    _Bool _isDefault;
    _Bool _fromPlist;
    NSString *_name;
    NSString *_role;
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}

@property (nonatomic, readonly) _Bool _hadResolutionErrorsOnLoad;
@property (nonatomic, readonly) _Bool _isDefault;
@property (nonatomic, readonly) _Bool _fromPlist;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *role;
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) Class delegateClass;
@property (retain, nonatomic) UIStoryboard *storyboard;

+ (_Bool)supportsSecureCoding;
+ (id)configurationWithName:(id)arg1 sessionRole:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithConfiguration:(id)arg1;
- (id)initWithName:(id)arg1 sessionRole:(id)arg2;
- (id)_initWithLoadErrorForSessionRole:(id)arg1;

@end
