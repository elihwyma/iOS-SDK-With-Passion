/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@protocol OKActionResponder;

@interface OKActionBindingProxy : NSObject

{
    NSString *_name;
    NSString *_actionScript;
    NSMutableArray *_shouldRecognizeSimultaneously;
    _Bool _alwaysRecognizeSimultaneously;
    NSMutableArray *_requireToFail;
    id _target;
    SEL _selector;
    id <OKActionResponder> _actionResponder;
    long long _tag;
    _Bool _canBeTriggeredWithoutInteractivity;
    unsigned long long _scope;
}

@property (copy, nonatomic) NSString *actionScript;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *shouldRecognizeSimultaneously;
@property (nonatomic) _Bool alwaysRecognizeSimultaneously;
@property (copy, nonatomic) NSArray *requireToFail;
@property (nonatomic) _Bool canBeTriggeredWithoutInteractivity;
@property (nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly) id <OKActionResponder> actionResponder;
@property (readonly) unsigned long long scope;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (id)actionBinding;
+ (id)actionBindingWithGestureRecognizer:(id)arg1 fromActionResponder:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unload;
- (id)initWithSettings:(id)arg1;
- (_Bool)performAction:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (_Bool)ownsGestureRecognizer:(id)arg1;
- (struct CGPoint)locationForActionFromGesture:(id)arg1;
- (void)prepareAction:(id)arg1;

@end
