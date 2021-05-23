/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject

{
    NSMutableArray *mBlips;
}

@property (retain, nonatomic) NSMutableArray *blips;

- (id)init;
- (id)blipAtIndex:(int)arg1;
- (unsigned int)addBlip:(id)arg1;
- (unsigned int)blipCount;

@end
