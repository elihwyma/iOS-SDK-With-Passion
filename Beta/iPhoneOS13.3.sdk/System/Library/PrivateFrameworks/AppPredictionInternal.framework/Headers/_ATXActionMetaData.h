/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ATXActionMetaData : NSObject

{
    _Bool _shouldPredict;
    _Bool _shouldPredictLockScreen;
    NSString *_actionKey;
    NSString *_title;
    NSString *_subtitle;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) _Bool shouldPredict;
@property (nonatomic, readonly) _Bool shouldPredictLockScreen;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldPredict:(_Bool)arg3 shouldPredictLockScreen:(_Bool)arg4 actionKey:(id)arg5;

@end
