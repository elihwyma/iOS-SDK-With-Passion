//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/_OSLogChunkStore.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkMemory : _OSLogChunkStore
{
    id /* CDUnknownBlockType */ _deallocator;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBytes:(const void )arg1 size:(NSUInteger)arg2 deallocator:(id /* CDUnknownBlockType */)arg3;

@end

