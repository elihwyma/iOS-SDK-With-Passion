/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPObjectTable : NSObject

{
    NSMutableDictionary *mObjects;
}

- (id)init;
- (id)objectAtIndex:(int)arg1;
- (void)setObject:(id)arg1 atIndex:(int)arg2;

@end
