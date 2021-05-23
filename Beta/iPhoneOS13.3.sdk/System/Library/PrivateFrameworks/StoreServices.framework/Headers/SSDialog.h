/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject

{
    NSArray *_buttons;
    NSMutableDictionary *_dialogDictionary;
}

@property (nonatomic, readonly) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) NSString *dialogKind;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SSDialogButton *defaultButton;

- (id)init;
- (void)dealloc;
- (id)valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithDialogDictionary:(id)arg1;

@end
