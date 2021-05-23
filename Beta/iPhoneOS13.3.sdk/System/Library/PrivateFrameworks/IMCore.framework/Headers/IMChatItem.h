/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMItem, NSString;

@interface IMChatItem : NSObject

{
    IMItem *_item;
}

@property (nonatomic, readonly) _Bool canDelete;
@property (retain, nonatomic, readonly) NSString *balloonBundleID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_item;
- (id)_initWithItem:(id)arg1;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)arg1;

@end
