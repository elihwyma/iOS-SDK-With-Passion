/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3ContainerItemDiffMetadata : NSObject

{
    long long _persistentID;
    long long _containerPersistentID;
    long long _itemPersistentID;
    long long _newPosition;
    long long _previousPosition;
}

@property (nonatomic) long long persistentID;
@property (nonatomic) long long containerPersistentID;
@property (nonatomic) long long itemPersistentID;
@property (nonatomic) long long newPosition;
@property (nonatomic) long long previousPosition;

+ (id)diffMetadataWithPersistentID:(long long)arg1;
+ (id)diffMetadataWithPersistentID:(long long)arg1 containerPersistentID:(long long)arg2 itemPersistentID:(long long)arg3 newPosition:(long long)arg4 previousPosition:(long long)arg5;

@end
