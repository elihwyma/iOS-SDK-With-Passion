/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TIKeyboardInputManagerToImplProtocol;

__attribute__((visibility("hidden")))
@interface _UIKeyboardImplProxy : NSObject

{
    id <TIKeyboardInputManagerToImplProtocol> _delegate;
}

@property (nonatomic) id <TIKeyboardInputManagerToImplProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)processPayloadInfo:(id)arg1;
- (void)pushAutocorrections:(id)arg1 requestToken:(id)arg2;

@end
