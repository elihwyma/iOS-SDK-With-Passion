/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIAttachmentBehavior;

@interface OKDynamicAttachment : NSObject

{
    struct UIOffset _localOffsetFromCenter;
    NSString *_remoteWidgetName;
    union {
        struct UIOffset offsetFromCenter;
        struct CGPoint anchorPoint;
    } _remote;
    double _length;
    double _damping;
    double _frequency;
    struct {
        unsigned int needsUpdate:1;
        unsigned int hasLength:1;
        unsigned int hasDamping:1;
        unsigned int hasFrequency:1;
    } _flags;
    UIAttachmentBehavior *_behavior;
}

@property (readonly) UIAttachmentBehavior *behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)updateForOwningDynamicProxy:(id)arg1;

@end
