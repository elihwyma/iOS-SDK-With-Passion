/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest

{
    unsigned long long _resultType;
    NSSet *_objectIDsToSerialize;
}

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSSet *objectIDsToSerialize;

+ (id)stringForResultType:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
