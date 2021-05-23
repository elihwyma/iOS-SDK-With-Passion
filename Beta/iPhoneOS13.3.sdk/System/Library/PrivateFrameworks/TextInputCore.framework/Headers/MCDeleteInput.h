/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@class NSString;

@interface MCDeleteInput : MCKeyboardInput

{
    _Bool _deleteBySyllable;
    _Bool _shouldDeleteAcceptCandidateInput;
    NSString *_deletedText;
}

@property (nonatomic, readonly) NSString *deletedText;
@property (nonatomic, readonly) _Bool deleteBySyllable;
@property (nonatomic, readonly) _Bool shouldDeleteAcceptCandidateInput;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (id)initWithDeletedText:(id)arg1 deleteBySyllable:(_Bool)arg2 shouldDeleteAcceptCandidateInput:(_Bool)arg3;

@end
