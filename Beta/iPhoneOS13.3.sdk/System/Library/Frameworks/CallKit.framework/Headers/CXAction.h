/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class NSDate, NSMutableString, NSString, NSUUID;

@protocol CXActionDelegate;

@interface CXAction : NSObject <Swift>

{
    NSUUID *_UUID;
    long long _state;
    long long _failureReason;
    NSDate *_commitDate;
    id <CXActionDelegate> _delegate;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long state;
@property (nonatomic) long long failureReason;
@property (copy, nonatomic, readonly) NSMutableString *customDescription;
@property (retain, nonatomic) NSDate *commitDate;
@property (weak, nonatomic) id <CXActionDelegate> delegate;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly) NSDate *timeoutDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (double)timeout;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilled;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateAsFailedWithReason:(long long)arg1;
- (id)sanitizedCopy;
- (void)fail;

@end
