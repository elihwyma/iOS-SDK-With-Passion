/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoDCFObject : NSObject

{
    NSString *_name;
    int _number;
}

+ (id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int *)arg4 numberRange:(struct _NSRange)arg5 suffix:(id)arg6;

- (id)description;
- (id)name;
- (long long)compare:(id)arg1;
- (int)number;
- (void)setWriteIsPending:(_Bool)arg1;
- (id)initWithName:(id)arg1 number:(int)arg2;

@end
