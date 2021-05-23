/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARCommandTagger : NSObject

{
    struct unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger>> _tagger;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1 usage:(long long)arg2;
- (id)commandTaggingFromRecognitionResult:(id)arg1 activeCommands:(id)arg2;
- (id)parameterTagForIndex:(long long)arg1;
- (id)commandPhraseTagForIndex:(long long)arg1;
- (_Bool)isParameterTag:(id)arg1;
- (_Bool)isCommandPhraseTag:(id)arg1;

@end
