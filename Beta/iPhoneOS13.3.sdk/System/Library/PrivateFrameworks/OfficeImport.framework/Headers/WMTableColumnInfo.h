/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : NSObject

{
    NSMutableArray *mStopArray;
}

- (unsigned long long)count;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (float)stopAt:(unsigned int)arg1;
- (id)initWithStopArray:(id)arg1;
- (void)mergeStopArray:(id)arg1;

@end
