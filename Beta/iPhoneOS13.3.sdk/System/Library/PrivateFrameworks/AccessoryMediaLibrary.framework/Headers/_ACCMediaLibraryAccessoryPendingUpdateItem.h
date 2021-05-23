/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject

{
    int _type;
    NSString *_libraryUID;
    NSString *_revision;
    id _item;
}

@property (nonatomic, readonly) NSString *libraryUID;
@property (nonatomic, readonly) NSString *revision;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) id item;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithLibrary:(id)arg1 revision:(id)arg2 type:(int)arg3 item:(id)arg4;

@end
