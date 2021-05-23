/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject

{
    long long _type;
    NSUUID *_uuid;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) CDUnknownBlockType block;

+ (id)updateWithType:(long long)arg1 uuid:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
