/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CACLanguageModel : NSObject

{
    NSString *_identifier;
    NSString *_text;
    NSMutableDictionary *_attributes;
    NSMutableArray *_children;
}

@property (retain) NSString *identifier;
@property (retain) NSString *text;
@property (readonly) NSMutableDictionary *attributes;
@property (readonly) NSArray *children;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_mutableAttributes;
- (id)_mutableChildren;
- (void)removeAllChildren;
- (id)initWithText:(id)arg1 identifier:(id)arg2 attributes:(id)arg3;
- (void)addChildLanguageModel:(id)arg1;
- (id)objectForAttribute:(id)arg1;
- (struct __RXLanguageObject *)createRXLanguageObjectRef;
- (void)setObject:(id)arg1 forAttribute:(id)arg2;
- (id)_initWithLanguageModel:(id)arg1;
- (void)logTreeDescriptionWithLevel:(int)arg1;

@end
