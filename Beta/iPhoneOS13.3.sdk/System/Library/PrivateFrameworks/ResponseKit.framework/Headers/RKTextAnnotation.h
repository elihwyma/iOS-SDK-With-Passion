/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKTextAnnotation : NSObject

{
    _Bool _machineGenerated;
    unsigned long long _type;
    struct _NSRange _range;
}

@property struct _NSRange range;
@property unsigned long long type;
@property _Bool machineGenerated;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange)arg1 andType:(unsigned long long)arg2 machineGenerated:(_Bool)arg3;

@end
