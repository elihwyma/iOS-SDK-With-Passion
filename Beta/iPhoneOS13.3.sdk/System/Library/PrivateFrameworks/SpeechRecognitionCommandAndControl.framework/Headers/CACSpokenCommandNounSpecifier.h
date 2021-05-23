/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CACSpokenCommandNounSpecifier : NSObject

{
    unsigned int _type;
    NSArray *_items;
}

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSArray *items;

- (id)description;
- (id)initWithType:(unsigned int)arg1 items:(id)arg2;
- (id)initWithType:(unsigned int)arg1 item:(id)arg2;

@end
