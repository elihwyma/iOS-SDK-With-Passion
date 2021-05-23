/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <ResponseKit/RKText.h>

@class NSDate, NSString, NSUUID;

@interface RKMessage : RKText

{
    NSString *_title;
    NSUUID *_senderUUID;
    NSDate *_dateSent;
    unsigned long long _position;
}

@property (copy, readonly) NSString *title;
@property (copy, readonly) NSUUID *senderUUID;
@property (copy, readonly) NSDate *dateSent;
@property (readonly) unsigned long long position;

- (id)initWithString:(id)arg1 title:(id)arg2 languageIdentifier:(id)arg3 senderUUID:(id)arg4 dateSent:(id)arg5 position:(unsigned long long)arg6;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2 field:(unsigned long long)arg3;

@end
