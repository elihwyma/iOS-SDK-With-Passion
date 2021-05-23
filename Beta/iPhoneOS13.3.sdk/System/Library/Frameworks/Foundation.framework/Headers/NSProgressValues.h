/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSProgressValues : NSObject <Swift>

{
    NSMutableDictionary *_userInfo;
    struct _NSProgressFraction _selfFraction;
    struct _NSProgressFraction _childFraction;
    double _remoteFractionCompleted;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    _Bool _isCancellable;
    _Bool _isPausable;
    _Bool _isCancelled;
    _Bool _isPaused;
    _Bool _usingChildUserInfo;
    NSString *_kind;
    _Bool _isPrioritizable;
    long long _portionOfParent;
}

+ (_Bool)supportsSecureCoding;
+ (id)decodableClasses;
+ (id)_importantKeys;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (_Bool)isFinished;
- (void)setCompletedUnitCount:(long long)arg1;
- (long long)totalUnitCount;
- (id)_indentedDescription:(unsigned long long)arg1;
- (struct _NSProgressFraction)overallFraction;
- (_Bool)isIndeterminate;
- (void)setIndeterminate:(_Bool)arg1;
- (double)fractionCompleted;
- (void)setFractionCompleted:(double)arg1;
- (long long)completedUnitCount;

@end
