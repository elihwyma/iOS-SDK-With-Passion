/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject

{
    int _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    _Bool _readOnly;
}

+ (id)brailleEvent;

- (id)initForHandlerType:(int)arg1;
- (void)requestSetValue:(id)arg1 forKey:(int)arg2;
- (id)mainDictionary;
- (void)setClaimDictionary:(id)arg1;
- (int)handlerType;
- (void)requestRegisterCallbackForKey:(int)arg1;
- (void)requestValueForKey:(int)arg1;
- (void)requestPerformActionForKey:(int)arg1;
- (id)claimValueForKey:(int)arg1;
- (void)setMainDictionary:(id)arg1;
- (id)claimDictionary;
- (void)performWithHandler:(id)arg1 trusted:(_Bool)arg2;

@end
