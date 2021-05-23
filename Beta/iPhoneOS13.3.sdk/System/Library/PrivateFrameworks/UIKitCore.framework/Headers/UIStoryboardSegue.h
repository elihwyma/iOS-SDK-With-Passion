/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject

{
    NSString *_identifier;
    UIViewController *_sourceViewController;
    UIViewController *_destinationViewController;
    CDUnknownBlockType _performHandler;
    CDUnknownBlockType _prepareHandler;
    id _sender;
}

@property (copy, nonatomic) CDUnknownBlockType prepareHandler;
@property (copy, nonatomic) CDUnknownBlockType performHandler;
@property (retain, nonatomic) id sender;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIViewController *sourceViewController;
@property (nonatomic, readonly) UIViewController *destinationViewController;

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (void)perform;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)_prepare;

@end
