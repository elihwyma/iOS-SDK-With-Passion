/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

#import <SiriUI/Swift-Protocol.h>

@interface SiriUIConfiguration : NSObject <Swift>

{
    _Bool _isSystemHostedPresentation;
    long long _flamesViewFidelity;
    long long _siriViewMode;
}

@property (nonatomic, readonly) long long flamesViewFidelity;
@property (nonatomic, readonly) _Bool isSystemHostedPresentation;
@property (nonatomic, readonly) long long siriViewMode;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(_Bool)arg2 siriViewMode:(long long)arg3;
- (id)_NSStringFromSiriViewMode:(long long)arg1;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(_Bool)arg2;

@end
