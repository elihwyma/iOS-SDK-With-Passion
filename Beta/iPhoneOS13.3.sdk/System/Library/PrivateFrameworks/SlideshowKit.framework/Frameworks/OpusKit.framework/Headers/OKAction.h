/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OKAction : NSObject

{
    double _timestamp;
    struct CGPoint _location;
    unsigned long long _state;
    unsigned long long _touchCount;
    _Bool _shouldCancelCouchPotato;
    _Bool _shouldPropagate;
    _Bool _isInstantaneous;
    unsigned long long _scope;
    unsigned long long _platform;
    NSMutableDictionary *_context;
    NSString *_keyPath;
}

@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) _Bool shouldPropagate;
@property (nonatomic) _Bool shouldCancelCouchPotato;
@property (nonatomic) _Bool isInstantaneous;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint location;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long touchCount;
@property (nonatomic, readonly) unsigned long long platform;
@property (retain, nonatomic, readonly) NSMutableDictionary *context;

+ (_Bool)supportsSecureCoding;
+ (id)action;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)createContext;
+ (unsigned long long)directionFromPoint:(struct CGPoint)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2 context:(id)arg3;
- (id)initWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;
- (void)convertFromResponder:(id)arg1 toResponder:(id)arg2;
- (void)setContextObject:(id)arg1 forKey:(id)arg2;

@end
