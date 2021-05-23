/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject

{
    NSArray *_conditions;
}

@property (copy, nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly, getter=isPrivateDataSyncingAllowed) _Bool privateDataSyncingAllowed;

+ (id)defaultAvailability;
+ (id)notAvailable;

- (id)initWithConditions:(id)arg1;

@end
