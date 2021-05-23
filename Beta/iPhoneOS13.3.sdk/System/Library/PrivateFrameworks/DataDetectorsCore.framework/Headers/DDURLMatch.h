/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DDURLMatch : NSObject

{
    struct _NSRange _range;
    NSString *_url;
}

- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)url;
- (struct _NSRange)range;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;

@end
