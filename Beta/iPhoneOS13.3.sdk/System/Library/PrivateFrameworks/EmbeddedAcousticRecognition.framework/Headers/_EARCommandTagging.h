/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface _EARCommandTagging : NSObject

{
    struct unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging>> _tagging;
    NSString *_commandId;
    NSArray *_tagSequence;
}

@property (copy, nonatomic, readonly) NSString *commandId;
@property (copy, nonatomic, readonly) NSArray *tagSequence;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)_initWithQuasarCommandTagging:(const struct CommandTagging *)arg1;
- (id)tokensForTag:(id)arg1;

@end
