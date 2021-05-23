/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, NSUUID;

@interface CATTaskProgress : NSObject

{
    _Bool _isCancelable;
    _Bool _isCanceled;
    NSUUID *_UUID;
    unsigned long long _phase;
    id _resultObject;
    NSError *_error;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
    NSString *_requestClassName;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) id resultObject;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) _Bool isCancelable;
@property (nonatomic) _Bool isCanceled;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;
@property (copy, nonatomic) NSString *requestClassName;
@property (nonatomic, readonly) unsigned long long state;

+ (_Bool)supportsSecureCoding;
+ (void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2;
+ (Class)classForResultObjectWithRequestClassName:(id)arg1;
+ (id)progressForOperation:(id)arg1;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setProgress:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (id)progressStateDescription;

@end
