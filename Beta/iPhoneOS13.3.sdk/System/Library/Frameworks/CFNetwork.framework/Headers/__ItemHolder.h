/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDate, NSNumber;

@protocol NSCopying;

@interface __ItemHolder : NSObject

{
    id <NSCopying> _key;
    id _item;
    NSDate *_lastTimeUsed;
    NSNumber *_version;
}

@property (retain, nonatomic) id <NSCopying> key;
@property (retain, nonatomic) id item;
@property (retain, nonatomic) NSDate *lastTimeUsed;
@property (retain, nonatomic) NSNumber *version;

- (void)dealloc;
- (id)description;
- (void)touch;
- (id)initWithItem:(id)arg1 key:(id)arg2;

@end
