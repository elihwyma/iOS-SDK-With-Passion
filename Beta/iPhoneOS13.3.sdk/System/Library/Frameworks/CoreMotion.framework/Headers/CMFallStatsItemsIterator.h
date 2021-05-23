/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject

{
    NSData *_data;
    NSDictionary *_item;
    struct Reader fMslReader;
    struct MemoryDelegate fMslReaderDelegate;
    struct ReaderIterator fMslIterator;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;

@end
