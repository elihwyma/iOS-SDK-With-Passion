/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDPrivacyPolicy : NSObject

{
    _Bool canPersistOnStorage;
    double temporalPrecision;
}

@property (nonatomic, readonly) _Bool canPersistOnStorage;
@property (nonatomic, readonly) double temporalPrecision;

+ (id)sharedPrivacyPolicy;

- (id)init;
- (id)description;
- (id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(_Bool)arg2;

@end
