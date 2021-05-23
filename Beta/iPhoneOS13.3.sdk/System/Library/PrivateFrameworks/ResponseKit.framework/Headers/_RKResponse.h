/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _RKResponse : NSObject

{
    NSString *_speechAct;
    NSString *_headword;
    NSString *_text;
}

@property (readonly) NSString *speechAct;
@property (readonly) NSString *headword;
@property (readonly) NSString *text;
@property (readonly) unsigned long long type;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3;

@end
