/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGSuggestionAction : NSObject

{
    NSString *_title;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

- (id)title;
- (void)execute;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
