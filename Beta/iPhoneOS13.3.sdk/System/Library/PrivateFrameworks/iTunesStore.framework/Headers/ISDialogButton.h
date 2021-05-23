/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ISDialogButton : NSObject

{
    int _actionType;
    id _parameter;
    NSString *_title;
    long long _urlType;
    NSString *_subtarget;
    NSDictionary *_dictionary;
    _Bool _tidContinue;
    long long _tag;
}

@property (retain) NSDictionary *dictionary;
@property int actionType;
@property (retain) id parameter;
@property (readonly) _Bool shouldContinueTouchIDSession;
@property (retain) NSString *title;
@property (copy) NSString *subtarget;
@property long long urlType;
@property long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buttonWithTitle:(id)arg1;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)loadFromDictionary:(id)arg1;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (_Bool)isEqual:(id)arg1 superficial:(_Bool)arg2;
- (int)_actionTypeForString:(id)arg1;
- (long long)_urlTypeForString:(id)arg1;
- (void)_openURLWithRequest:(id)arg1;

@end
