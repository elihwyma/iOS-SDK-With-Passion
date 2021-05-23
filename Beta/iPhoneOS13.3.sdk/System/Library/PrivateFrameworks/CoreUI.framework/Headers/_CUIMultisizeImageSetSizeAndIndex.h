/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIMultisizeImageSetSizeAndIndex : NSObject

{
    struct CGSize _size;
    unsigned int _index;
    long long _idiom;
    unsigned long long _subtype;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned int index;
@property (nonatomic) long long idiom;
@property (nonatomic) unsigned long long subtype;

- (id)description;
- (id)initWithSize:(struct CGSize)arg1 index:(unsigned int)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;

@end
