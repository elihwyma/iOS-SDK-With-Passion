/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult

{
    NSDictionary *_serializedObjects;
}

@property (nonatomic, readonly) NSDictionary *serializedObjects;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3;

@end
