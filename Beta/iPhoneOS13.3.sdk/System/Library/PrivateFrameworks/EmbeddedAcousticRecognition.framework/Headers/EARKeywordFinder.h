/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface EARKeywordFinder : NSObject

{
    struct unique_ptr<quasar::KeywordFinder, std::__1::default_delete<quasar::KeywordFinder>> _kwf;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (id)correctedResultWithKeyword:(id)arg1 tokenizedKeyword:(id)arg2 preItnSausage:(id)arg3 preItnOneBest:(id)arg4 preItnOneBestIndices:(id)arg5 nbestSize:(long long)arg6;

@end
