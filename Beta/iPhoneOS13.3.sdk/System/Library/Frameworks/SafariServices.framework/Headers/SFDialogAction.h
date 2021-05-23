/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFDialogAction : NSObject

{
    long long _activatingKeyboardShortcut;
    long long _actionType;
    NSString *_title;
}

@property (nonatomic, readonly) long long activatingKeyboardShortcut;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSString *title;

+ (id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;

- (id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;

@end
