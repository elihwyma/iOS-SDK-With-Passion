/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKDayViewItemPath : NSObject

{
    int _section;
    unsigned long long _index;
}

@property (nonatomic, readonly) int section;
@property (nonatomic, readonly) unsigned long long index;

+ (id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2;

@end
