/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray, NSDate;

@interface CPLResetTracker : NSObject

{
    NSArray *_resetReasons;
}

@property (copy, nonatomic, readonly) NSArray *resetReasons;
@property (nonatomic, readonly) NSDate *earliestReasonDate;
@property (nonatomic, readonly) NSDate *likelyResetDate;
@property (nonatomic, readonly) _Bool hasReasons;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)registerLikelyResetReason:(id)arg1;
+ (id)currentTracker;
+ (void)_storeReasonsLocked;
+ (void)_registerReasonLocked:(id)arg1;
+ (void)registerLikelyResetReason:(id)arg1 arguments:(char *)arg2;
+ (void)discardTracker:(id)arg1;
+ (id)currentReasonDescriptions;
+ (id)registerTentativeResetReasonIfCrashing:(id)arg1;
+ (void)discardTentativeResetReason:(id)arg1;
+ (_Bool)shouldIgnoreDefaultsCPLKey:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResetReasons:(id)arg1;
- (id)likelyResetReasonWithImmediateReason:(id)arg1;

@end
