/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TISCTextRunResponse : NSObject

{
    struct __CFArray *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont *_font;
}

+ (id)textRunResponseWithFont:(struct __CTFont *)arg1;
+ (id)textRunResponseByMergingResponses:(id)arg1;

- (void)dealloc;
- (id)widths;
- (struct __CTFont *)font;
- (struct __CFArray *)ctLines;

@end
