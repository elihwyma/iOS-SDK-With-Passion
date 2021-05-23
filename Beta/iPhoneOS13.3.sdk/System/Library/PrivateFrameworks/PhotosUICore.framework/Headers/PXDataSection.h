/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@protocol NSObject><NSCopying;

@interface PXDataSection : NSObject <Swift>

{
    id <NSObject><NSCopying> _outlineObject;
    unsigned long long _identifier;
    id _content;
}

@property (nonatomic, readonly) id <NSObject><NSCopying> outlineObject;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) _Bool containsAnyObjects;
@property (nonatomic, readonly) id content;

- (id)init;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)initWithOutlineObject:(id)arg1;

@end
