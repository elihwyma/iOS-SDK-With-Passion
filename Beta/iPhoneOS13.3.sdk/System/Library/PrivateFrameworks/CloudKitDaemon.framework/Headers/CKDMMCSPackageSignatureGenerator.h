/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDMMCSPackageSignatureGenerator : NSObject

{
    _Bool _valid;
    void *_generator;
}

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) _Bool valid;

- (id)init;
- (void)dealloc;
- (void)updateWithData:(id)arg1;
- (id)dataByFinishingSignature;
- (char *)_finishGenerator;

@end
