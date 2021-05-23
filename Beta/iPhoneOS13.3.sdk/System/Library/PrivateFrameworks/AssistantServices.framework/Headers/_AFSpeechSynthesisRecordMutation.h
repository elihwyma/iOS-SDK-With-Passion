/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject

{
    AFSpeechSynthesisRecord *_baseModel;
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUtterance:1;
        unsigned int hasBeginTimestamp:1;
        unsigned int hasEndTimestamp:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setUtterance:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setBeginTimestamp:(unsigned long long)arg1;
- (void)setEndTimestamp:(unsigned long long)arg1;

@end
