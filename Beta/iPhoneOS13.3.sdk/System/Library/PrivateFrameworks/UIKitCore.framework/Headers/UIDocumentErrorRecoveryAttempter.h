/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDocument;

__attribute__((visibility("hidden")))
@interface UIDocumentErrorRecoveryAttempter : NSObject

{
    UIDocument *_document;
    id _wrappedRecoveryAttempter;
    CDUnknownBlockType _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    CDUnknownBlockType _appModalRecoveryAttempter;
    CDUnknownBlockType _recoveryCancelerOrNil;
    struct {
        unsigned int attemptedRecovery:1;
    } _errorRecoveryAttempterFlags;
}

- (void)dealloc;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (_Bool)attemptSilentRecoveryFromError:(id)arg1 error:(id *)arg2;
- (void)cancelRecovery;
- (id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2;
- (id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(CDUnknownBlockType)arg3 recoveryCanceler:(CDUnknownBlockType)arg4;

@end
