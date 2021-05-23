/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest

{
    NSError *_causedByError;
}

@property (nonatomic, readonly) NSError *causedByError;

- (void)dealloc;
- (id)initWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
