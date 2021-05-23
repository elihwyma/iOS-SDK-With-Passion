/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SSDialogButton : NSObject

{
    NSDictionary *_actionDictionary;
    NSString *_title;
}

@property (nonatomic, readonly) id actionParameter;
@property (nonatomic, readonly) NSString *buttonAction;
@property (nonatomic, readonly) NSString *URLTarget;
@property (copy, nonatomic, readonly) NSString *buttonTitle;

+ (id)buttonWithTitle:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 actionDictionary:(id)arg2;
- (id)valueForActionProperty:(id)arg1;

@end
