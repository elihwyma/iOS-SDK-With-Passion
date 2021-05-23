/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@interface AXSSKeyboardCommandInfo : NSObject

{
    _Bool _handlesBothDownAndUp;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _downHandler;
    CDUnknownBlockType _upHandler;
}

@property (nonatomic, readonly) _Bool handlesBothDownAndUp;
@property (nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic, readonly) CDUnknownBlockType downHandler;
@property (nonatomic, readonly) CDUnknownBlockType upHandler;

+ (id)infoWithHandler:(CDUnknownBlockType)arg1;
+ (id)infoWithDownHandler:(CDUnknownBlockType)arg1 upHandler:(CDUnknownBlockType)arg2;

- (id)_initWithHandler:(CDUnknownBlockType)arg1 downHandler:(CDUnknownBlockType)arg2 upHandler:(CDUnknownBlockType)arg3 handlesBothDownAndUp:(_Bool)arg4;

@end
