/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TVPlaybackCustomEventUserInfo : NSObject

{
    _Bool _expectsReturnValue;
    NSDictionary *_properties;
    id _returnValue;
}

@property (nonatomic) _Bool expectsReturnValue;
@property (nonatomic, readonly) id returnValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (_Bool)respondsToSelector:(SEL)arg1;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)initWithProperties:(id)arg1 expectsReturnValue:(_Bool)arg2;

@end
