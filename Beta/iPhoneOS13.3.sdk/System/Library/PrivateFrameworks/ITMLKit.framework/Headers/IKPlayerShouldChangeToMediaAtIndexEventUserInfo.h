/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject

{
    _Bool _shouldChange;
    long long _index;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) _Bool shouldChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithIndex:(long long)arg1;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (_Bool)expectsReturnValue;

@end
