/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject

{
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    _Bool _hasRouterInfo;
    id <NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)keyMasks;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (_Bool)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;
- (void)setDisplayToken:(int)arg1;
- (void)addKeyMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;
- (void)addModifierMask:(unsigned int)arg1;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;
- (int)displayToken;

@end
