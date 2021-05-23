/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _CUISubrangeData : NSData

{
    struct _NSRange _range;
    NSData *_data;
}

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;

@end
