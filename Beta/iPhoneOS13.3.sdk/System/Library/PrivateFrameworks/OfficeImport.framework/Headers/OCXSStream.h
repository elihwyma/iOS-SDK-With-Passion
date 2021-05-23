/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject

{
    NSMutableArray *mLevelStack;
}

- (id)init;
- (_Bool)hasLevels;
- (int)currentContextDepth;
- (_Bool)popLevel;
- (int)currentContextChildDepth;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;

@end
