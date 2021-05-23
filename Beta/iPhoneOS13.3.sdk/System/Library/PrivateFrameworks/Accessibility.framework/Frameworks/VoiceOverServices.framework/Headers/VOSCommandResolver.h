/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, VOSScreenreaderMode;

@interface VOSCommandResolver : NSObject

{
    NSNumber *_cachedPressCount;
    NSNumber *_cachedContext;
    _Bool _shouldApplyRTL;
    VOSScreenreaderMode *_screenreaderMode;
    unsigned long long _keyboardMode;
    unsigned long long _host;
    unsigned long long _bsiTypingMode;
    CDUnknownBlockType _fetchPressCountBlock;
    CDUnknownBlockType _fetchContextBlock;
    CDUnknownBlockType _resolvingEventOccurredBlock;
}

@property (retain, nonatomic) VOSScreenreaderMode *screenreaderMode;
@property (nonatomic, readonly) _Bool isDefaultScreenreaderMode;
@property (nonatomic, readonly) _Bool isHandwritingScreenreaderMode;
@property (nonatomic, readonly) _Bool isBSIScreenreaderMode;
@property (nonatomic) _Bool shouldApplyRTL;
@property (nonatomic) unsigned long long keyboardMode;
@property (nonatomic, readonly) _Bool isDefaultKeyboardMode;
@property (nonatomic, readonly) _Bool isQuickNavKeyboardMode;
@property (nonatomic) unsigned long long host;
@property (nonatomic, readonly) _Bool isIPad;
@property (nonatomic, readonly) _Bool isIPhone;
@property (nonatomic, readonly) _Bool isWatch;
@property (nonatomic, readonly) _Bool isAppleTV;
@property (nonatomic, readonly) _Bool isHomePod;
@property (nonatomic) unsigned long long bsiTypingMode;
@property (nonatomic, readonly) long long pressCount;
@property (copy, nonatomic) CDUnknownBlockType fetchPressCountBlock;
@property (nonatomic, readonly) unsigned long long context;
@property (copy, nonatomic) CDUnknownBlockType fetchContextBlock;
@property (copy, nonatomic) CDUnknownBlockType resolvingEventOccurredBlock;

+ (unsigned long long)currentHost;
+ (id)resolverForCurrentHost;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resolverWithScreenreaderModeVariant:(id)arg1;

@end
