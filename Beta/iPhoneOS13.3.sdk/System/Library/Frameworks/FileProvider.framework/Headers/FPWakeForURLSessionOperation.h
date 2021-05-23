/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPWakeForURLSessionOperation : FPActionOperation

{
    NSString *_sessionIdentifier;
}

- (void)actionMain;
- (id)initForProvider:(id)arg1 sessionIdentifier:(id)arg2;

@end
