/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPBlockRecoveryAttempter : NSObject

{
    CDUnknownBlockType _recoveryBlock;
    NSError *_expectedError;
}

@property (weak, nonatomic) NSError *expectedError;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;

@end
