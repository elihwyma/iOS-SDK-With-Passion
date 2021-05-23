/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMDrawingAction : NSObject

{
    int _type;
    id _value;
    float _floatValue;
}

- (float)floatValue;
- (void)dealloc;
- (id)description;
- (int)type;
- (id)value;
- (id)initWithType:(int)arg1 andValue:(id)arg2;
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;

@end
