/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAction.h>

@class NSArray, NSDictionary;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic, readonly) NSDictionary *pidToContextInfoDictionary;
@property (nonatomic, readonly) NSArray *processIds;
@property (nonatomic, readonly) NSArray *secureModeViolations;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithPidToContextIdsDictionary:(id)arg1;
- (id)initWithSecureModeViolations:(id)arg1;
- (id)_initWithPidToContextInfoDictionary:(struct NSDictionary *)arg1;

@end
