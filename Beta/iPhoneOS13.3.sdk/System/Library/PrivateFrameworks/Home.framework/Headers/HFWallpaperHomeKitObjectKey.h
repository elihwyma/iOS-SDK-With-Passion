/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface HFWallpaperHomeKitObjectKey : NSObject

{
    unsigned long long _type;
    NSUUID *_uniqueIdentifier;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)stringFromHomeKitObjectType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)initWithHomeKitObject:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 uniqueIdentifier:(id)arg2;

@end
