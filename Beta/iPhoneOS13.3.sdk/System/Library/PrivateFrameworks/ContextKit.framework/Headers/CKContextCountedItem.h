/*
 Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

#import <Foundation/NSObject.h>

@interface CKContextCountedItem : NSObject

{
    id _item;
    unsigned long long _count;
}

@property (retain, nonatomic) id item;
@property (nonatomic) unsigned long long count;

+ (_Bool)supportsSecureCoding;
+ (id)item:(id)arg1 withCount:(unsigned long long)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
