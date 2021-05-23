/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPDocument : NSObject

{
    NSMutableArray *pages;
}

- (id)init;
- (void)dealloc;
- (void)addPage:(id)arg1;

@end
