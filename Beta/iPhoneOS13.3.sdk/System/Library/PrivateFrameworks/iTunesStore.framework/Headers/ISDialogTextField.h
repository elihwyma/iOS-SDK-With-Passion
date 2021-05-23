/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ISDialogTextField : NSObject

{
    long long _keyboardType;
    _Bool _secure;
    NSString *_title;
    NSString *_value;
}

@property long long keyboardType;
@property (getter=isSecure) _Bool secure;
@property (retain) NSString *title;
@property (retain) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textFieldWithTitle:(id)arg1;

- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
