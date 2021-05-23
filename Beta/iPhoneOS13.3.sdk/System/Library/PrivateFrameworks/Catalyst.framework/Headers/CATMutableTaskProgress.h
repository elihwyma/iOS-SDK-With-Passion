/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskProgress.h>

@class NSDictionary, NSError;

@interface CATMutableTaskProgress : CATTaskProgress

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) id resultObject;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) _Bool isCancelable;
@property (nonatomic) _Bool isCanceled;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

- (id)initWithCoder:(id)arg1;
- (void)setProgress:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2;

@end
