/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSDate *currentDate;

- (id)init;
- (id)persistedValueForKey:(id)arg1;
- (void)setPersistedValue:(id)arg1 forKey:(id)arg2;

@end
