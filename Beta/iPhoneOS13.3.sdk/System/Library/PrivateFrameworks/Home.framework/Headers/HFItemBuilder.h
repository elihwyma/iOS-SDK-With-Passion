/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMHome;

@interface HFItemBuilder : NSObject

{
    id _homeKitRepresentation;
    HMHome *_home;
}

@property (nonatomic, readonly) id homeKitRepresentation;
@property (nonatomic, readonly) HMHome *home;

+ (Class)homeKitRepresentationClass;

- (id)init;
- (void)setHome:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)verifyPropertiesAreSet:(id)arg1;
- (void)setHomeKitRepresentation:(id)arg1;
- (id)commitItemBuilderSetDiff:(id)arg1 addBlock:(CDUnknownBlockType)arg2 deleteBlock:(CDUnknownBlockType)arg3;
- (id)_commitSetDiff:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)commitSetDiff:(id)arg1 addBlock:(CDUnknownBlockType)arg2 updateBlock:(CDUnknownBlockType)arg3 deleteBlock:(CDUnknownBlockType)arg4;
- (id)verifyProperty:(id)arg1 matchesCondition:(CDUnknownBlockType)arg2 description:(id)arg3;
- (id)verifyPropertyIsSet:(id)arg1;
- (id)_failureFutureWithReason:(id)arg1;
- (id)verifyNameIsNotEmpty:(id)arg1;

@end
