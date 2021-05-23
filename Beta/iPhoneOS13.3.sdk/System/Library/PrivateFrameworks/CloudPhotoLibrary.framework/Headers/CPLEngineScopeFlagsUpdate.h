/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject

{
    long long _flags;
    long long _updatedFlagsMask;
}

@property (nonatomic, readonly) long long updatedFlagsMask;
@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly) NSArray *arrayDescription;

+ (id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long *)arg2;
+ (id)flagsDescriptionMapping;
+ (id)descriptionForFlags:(long long)arg1;

- (id)init;
- (id)description;
- (id)initWithFlags:(long long)arg1;
- (_Bool)valueForFlag:(long long)arg1;
- (void)setValue:(_Bool)arg1 forFlag:(long long)arg2;
- (long long)updatedFlagsFromFlags:(long long)arg1;

@end
