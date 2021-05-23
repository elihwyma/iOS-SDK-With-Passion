/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUScriptModalDialogResponse : NSObject

{
    long long _buttonIndex;
    NSString *_textFieldValue;
}

@property (nonatomic) long long buttonIndex;
@property (retain, nonatomic) NSString *textFieldValue;

- (void)dealloc;

@end
