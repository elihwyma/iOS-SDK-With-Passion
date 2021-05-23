/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMCloudKitSyncProgressRuntimeTest.h>

@class NSError;

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest

{
    NSError *_error;
}

@property (copy, nonatomic) NSError *error;

- (id)initWithErrorCode:(long long)arg1;
- (void)willUpdateSyncState:(id)arg1;

@end
