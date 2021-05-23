/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSKeyedUnarchiverHelper : NSObject

{
    NSArray *_white;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    NSError *_decodeError;
}

@property (copy) NSError *decodeError;

- (id)init;
- (void)dealloc;
- (id)allowedClassNames;
- (void)setAllowedClassNames:(id)arg1;
- (_Bool)classNameAllowed:(Class)arg1;

@end
