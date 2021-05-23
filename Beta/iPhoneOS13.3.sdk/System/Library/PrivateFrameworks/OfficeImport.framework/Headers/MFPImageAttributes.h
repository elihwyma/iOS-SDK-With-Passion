/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPImageAttributes : NSObject

{
    NSMutableDictionary *mColorAdjustMap;
}

- (id)init;
- (id)colorAdjustWithType:(int)arg1;
- (id)ensureColorAdjustWithType:(int)arg1;

@end
