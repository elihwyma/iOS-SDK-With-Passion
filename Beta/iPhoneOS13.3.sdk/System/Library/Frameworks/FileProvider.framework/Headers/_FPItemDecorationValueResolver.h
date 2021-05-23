/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPItem;

__attribute__((visibility("hidden")))
@interface _FPItemDecorationValueResolver : NSObject

{
    FPItem *_item;
    unsigned long long _style;
}

+ (id)resolverForItem:(id)arg1 style:(unsigned long long)arg2;

- (id)valueForKey:(id)arg1;
- (id)initWithItem:(id)arg1 style:(unsigned long long)arg2;

@end
