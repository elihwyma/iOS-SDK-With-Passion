/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARResultCombiner : NSObject

{
    struct unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner>> _combiner;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (id)combinedResultWithSystemResults:(id)arg1;

@end
