/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_segueClassName;
    UIViewController *_viewController;
    NSString *_destinationViewControllerIdentifier;
    SEL _prepareForChildViewControllerSelector;
    _Bool _performOnViewLoad;
    _Bool _animates;
}

@property (nonatomic) _Bool performOnViewLoad;
@property (nonatomic) _Bool animates;
@property (retain, nonatomic) NSString *customPrepareForChildViewControllerSelectorName;
@property (nonatomic, readonly) SEL prepareForChildViewControllerSelector;
@property (nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)perform:(id)arg1;
- (id)_perform:(id)arg1;
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;

@end
