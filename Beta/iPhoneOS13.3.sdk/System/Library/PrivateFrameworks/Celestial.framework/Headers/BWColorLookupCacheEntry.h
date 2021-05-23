/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSData;

@interface BWColorLookupCacheEntry : NSObject

{
    NSData *_foregroundColorLookupTable;
    NSData *_backgroundColorLookupTable;
}

@property (retain, nonatomic, readonly) NSData *foregroundColorLookupTable;
@property (retain, nonatomic, readonly) NSData *backgroundColorLookupTable;

- (void)dealloc;
- (id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2;

@end
